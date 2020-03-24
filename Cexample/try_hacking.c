#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "hacking.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Rus");
    int *ptr_int = (int *)er_malloc(atoi(argv[2]));
    printf("Выделили памяти для переменной ptr_int‚ [%d]", sizeof(ptr_int) * atoi(argv[2]));
    return 0;
}