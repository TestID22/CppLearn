#include <stdio.h>
#include <conio.h>

void pointerInFunction();

int main(){
    int a = 5;
    printf("Data: [%d]\t adress = [%p]\n", a, &a);
    pointerInFunction(&a); //переменная которую стоит изменить передаёться по ссылке.
    printf("Data: [%d]\t adress = [%p]\n", a, &a);
    getchar();
    return 0;
}

void pointerInFunction(int *p_a){ //в параметр функции помещается указатель.
    (*p_a)++;
}
