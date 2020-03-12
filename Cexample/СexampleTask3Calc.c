#include <stdio.h>

int main(){
    char operator;
    int firstNumber, secondNumber;
    printf("Enter operator + or - or / or *\n");
    scanf("%c", &operator);

    printf("Enter first number\n");
    scanf("%d", &firstNumber);

    printf("Enter second number\n");
    scanf("%d", &secondNumber);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
        break;
    case '-':
        printf("%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
        break;
    case '*':
        printf("%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
        break;
    case '/':
        if(secondNumber != 0)
            printf("%d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
    default:
        printf("Введён неправельный оператор");
        break;
    }

}