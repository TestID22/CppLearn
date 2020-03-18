#include <stdio.h>

int main(){
    int i;
    int a = 1;
    int b = 3;
    int c;
    for(i = 0; i < 10; i++){
        printf("Hello, world");
        //вставка кода ассемблера Компилируется в Visual Studio
        __asm{
            mov eax, a
            mov ebx, b
            add eax, ebx
            mov c, eax
        }
        printf("%d", c);
    }
    return 0;
}