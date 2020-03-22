#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Rus");
    char *char_ptr;
    int *int_ptr;
    int mem_size;

    if(argc < 2){
        mem_size = 50;
    }else
    {
        mem_size = atoi(argv[1]);
    }

    printf("Выделенно %d байт под char_ptr\n", mem_size);
    char_ptr = (char *)malloc(mem_size);

    if(char_ptr == NULL){
        fprintf(stderr, "Ошибка: выделения памяти в HEAP");
        exit(-1);
    }

    strcpy(char_ptr, "Это строка в куче\n");
    printf("Память [0x%08x] ---> %s\n", char_ptr, char_ptr);

    printf("Выделяем 12 байтов под int_ptr\n");
    int_ptr = (int *)malloc(12);

    if(int_ptr == NULL){
        fprintf(stderr, "Ошибка: выделения памяти в HEAP");
        exit(-1);
    }

    *int_ptr = 133338;
    printf("int_ptr = [0x%08x] данные -->[%d]\n", int_ptr, *int_ptr);

    printf("очищаем память char_ptr\n");
    free(char_ptr);
    printf("Выделяем 150 байтов под char_ptr\n");
    char_ptr = (char *)malloc(150);
    
    if(char_ptr == NULL){
        fprintf(stderr, "Ошибка выделения памяти heap");
        exit(-1);
    }    
    
    strcpy(char_ptr, "Новая запись");

    printf("Адрес [0x%x08] --> %s",char_ptr,  char_ptr);

    //free(int_ptr);
    return 0;
}