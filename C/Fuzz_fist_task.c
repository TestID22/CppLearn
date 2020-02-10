#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{   
    //Код из Книги по Фаззингу.
    char buffer[1];
    strcpy(buffer, argv[1]);
    printf("%p", buffer);
    return 0;
}
