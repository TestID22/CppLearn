#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    char *locale = setlocale(LC_ALL, "Rus");
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend ");
    scanf("%d", &dividend);

    printf("Enter divisor ");
    scanf("%d", &divisor);
    
    quotient = dividend / divisor; // вычисляем частное
    remainder = dividend % divisor; // вычисляем остаток от деления

    printf("qutient = %d\n", quotient);
    printf("Remainder =  %d", remainder);

    getch();
    return 0;
}