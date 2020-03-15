#include <stdio.h>

void cyclicSwap();

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d  0x%p \nb = %d = 0x%p\nc = %d = 0x%p\n", a,&a,b,&b,c,&c);

    cyclicSwap(&a, &b, &c);
    printf("swap\n\n");

    printf("a = %d\nb = %d\nc = %d", a,b,c);
}

void cyclicSwap(int *a, int *b, int *c){
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}