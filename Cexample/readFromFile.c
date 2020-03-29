#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Rus");
    FILE *f = fopen("d:\\test\\test.txt", "r+b"); //открываем файл в режиме r + b
    char *text;   //буфер для строки
    fgets(text, 100,f);      //arg буфер, кол во байтов для чтения, откуда читаем.
    printf("0x%08x", &text);      
    fclose;
    return 0;
}