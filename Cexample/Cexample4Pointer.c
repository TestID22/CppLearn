#include <stdio.h>

int main(){
    int data[5], i;

    printf("Enter 5 elements");

    for(int i = 0; i < 5; i++){
        scanf("%d", data + i);
    }

    printf("array\n");
    for(int i = 0; i < 5; i++){
        printf("%d", *(data + i));
    }

}