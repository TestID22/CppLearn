#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void *er_malloc(unsigned int size);

int main(int argc, char **argv){
    setlocale(LC_ALL, "Rus");
    char *name;
    name = (char *)er_malloc(atoi(argv[1]));
    printf("��������� [%d] ���� ������ ��� ���", atoi(argv[1]));
    char *data = "������ ������������� �����";
    strcpy(data, name);
    getchar();
    return 0;
}

void * er_malloc(unsigned int size){
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL){
        perror("Ошибка выделения памяти");
    }
    return ptr;
}