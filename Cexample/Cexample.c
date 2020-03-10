#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Rus");
    int nums;
    printf("Введите число"); 
    scanf("%d", &nums); //через ссылку указывается переменная для записи
    printf("Вы ввели %d", nums); //вывод как в Java, через escape последовательность
    getch();
    return 0;
}