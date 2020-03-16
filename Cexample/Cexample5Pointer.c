#include <stdio.h>
#include <conio.h>
#include <string.h>

void pointerFunc();
void changerName(char c, int index);

int main(){
    pointerFunc(10);
    changerName('P', 0);
    getch();
    return 0;
}



void pointerFunc(int inputNumber){
    int number = inputNumber;
    int *p_number = &number;
    printf("Number [%d], adress [%p]\n", *p_number, p_number);
    
}

void changerName(char c, int index){
    char name[] = "alex";
    char *p_name = name;
    for(int i = 0; i < strlen(name); i++){
        if(i == index){
            name[i] = c;
        }
        printf("%c adres = [%p]\n", *p_name, p_name);
        *p_name++;
    }
   
}