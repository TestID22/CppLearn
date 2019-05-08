#include <stdio.h>
#include <string.h>

int main() {
	char std_a[20];
	strcpy_s(std_a, "HEllo World\n"); //функция strcpy_s копирует строку 
	printf(std_a);

}