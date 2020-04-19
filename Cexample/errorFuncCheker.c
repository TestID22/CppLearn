#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void *error_checker(unsigned meme_size){
    void *pointer;
    pointer = malloc(meme_size);
    if(pointer == NULL){
        exit(-1);
    }else
    {
        return pointer;
    }
    
}

int main(int argc, char **argv){
    setlocale(LC_ALL, "Rus");

    int *int_ptr;
    char *char_ptr;
    int mem_size;

    if(argc < 2){
        printf("Введите аргументы для выделения памяти\n");
    }else
    {
        mem_size = atoi(argv[1]);
        int_ptr = (int *)error_checker(mem_size);
        printf("Для переменной int_ptr выделили [%d] байт в хипе типа INTEGER\n", mem_size);
    }
    
    char_ptr = (char *) error_checker(100);


    printf("Не забывай подчищать за собой память\n");
    free(int_ptr);
    free(char_ptr);
    printf("Память очищена [0x%08x]", int_ptr);
    return 0;
}