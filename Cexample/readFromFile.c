#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Rus");
    FILE *f = fopen("d:\\test\\test.txt", "r+b"); //��������� ���� � ������ r + b
    char *text;   //����� ��� ������
    fgets(text, 100,f);      //arg �����, ��� �� ������ ��� ������, ������ ������.
    printf("0x%08x", &text);      
    fclose;
    return 0;
}