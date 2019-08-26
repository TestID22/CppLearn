#include <stdio.h>
#include <string.h>

/*пример переполнения буфера, how it works. аргументом ком строки передадим 
значение больше чем 8 байтов char = 1 байт*
так как адресса находятся один за другим, это можно увидеть в консоли*/

int main(int arv, char *argv[])
{
    SetConsoleCp(cp1251);
    SetConsoleOutput(cp1251);
    char buffer_one[8];
    char buffer_two[8];

    strcpy(buffer_one, "one");
    strcpy(buffer_two, "two");

    printf("[before] buffer_one at %p and contains %s\n", buffer_one, buffer_one);
    printf("[before] buffer_two at %p и contains %s\n", buffer_two, buffer_two);

    printf("Let put %d bytes at buffer_two \n",strlen(argv[1]));
    strcpy(buffer_two, argv[1]);

    printf("[after] buffer_one at %p and contains %s\n", buffer_one, buffer_one);
    printf("[after] buffer_two at %p and contains %s\n", buffer_two, buffer_two);

}