#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void *er_malloc(unsigned int size);

int main(int argc, char **argv){
    setlocale(LC_ALL, "Rus");
    char *name;
    name = (char *)er_malloc(atoi(argv[1]));
    printf("Выделенно [%d] байт памяти под имя", atoi(argv[1]));
    char *data = "Строка переполняющая буфер";
    strcpy(data, name);
    getchar();
    return 0;
}

void * er_malloc(unsigned int size){
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL){
        perror("РћС€РёР±РєР° РІС‹РґРµР»РµРЅРёСЏ РїР°РјСЏС‚Рё");
    }
    return ptr;
}