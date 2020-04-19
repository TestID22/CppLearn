#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "hacking.h"

void * er_malloc();

int main(int argc, char **argv){
    setlocale(LC_ALL, "Rus");

    FILE *file_descriptor; //дескриптор 
    char *path, *buffer; 

    if(argc < 2){
        printf("Введите заметку");
    }

    path = (char *) er_malloc(20); 
    buffer = (char *) er_malloc(10);//Буффер для хранения строки.
    scanf("%s", buffer);
    strcpy(path, "d:\\test\\note.txt");
    file_descriptor = fopen(path, "w");
    fwrite(buffer, strlen(buffer), 1, file_descriptor);


    return 0;
}