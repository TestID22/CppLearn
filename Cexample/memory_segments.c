#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//сегментация памяти в Cи text, data, bss, stack, heap.
//text - храниться код без доступа к перезаписи.
//data - инициализированные переменные.
//bss - неинициализированные переменные.
//stack - локальные переменные.
//heap - на куче доступ к памяти осуществляется через указатели, а выделение памяти происходит чере функцию malloc
int global_var; //  bss
int global_init_var = 5; // data

void function(){ 
    int stack_var; //локальные переменные храняться в стеке STACK
    printf("stack_var 0x%08x\n", &stack_var);
}

int main(){

    int stack_var; //stack
    static int static_init_var = 5; // data
    static int static_var;          // bss
    int *heap_var_ptr;

    heap_var_ptr = (int *)malloc(4); //heap
    system("color 4");

    printf("\n\nDATA segment\n");
    printf("-----------------------------------------\n");
    printf("global_init_var on adress 0x%08x\n", &global_init_var);
    printf("static_init_var on adress 0x%08x\n",&static_init_var);
    printf("-----------------------------------------\n\n\n");
    
    printf("BSS segment\n");
    printf("-----------------------------------------\n");
    printf("static_var 0x%08x\n", &static_var);
    printf("global_var 0x%08x\n", &global_var);
    printf("-----------------------------------------\n\n\n");

    printf("Heap segment\n");
    printf("-----------------------------------------\n");
    printf("heap_var_ptr 0x%08x\n", &heap_var_ptr);
    printf("-----------------------------------------\n\n\n");

    printf("Stack segment\n");
    printf("-----------------------------------------\n");
    printf("stack_var 0x%08x\n", &stack_var);
    function();
    printf("-----------------------------------------\n");
    return 0;
}