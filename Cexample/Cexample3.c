#include <stdio.h>
#include <conio.h>

int main(void)
{
    int youNumber;
    printf("Enter numeber");
    scanf("%d", &youNumber);

    if(youNumber % 2 == 0)
        printf("Your number are ODD %d", youNumber);
    else
        printf("Нечет %d", youNumber);
    getch();
    return 0;
}