#include <stdio.h>
#include <string>

int main()
{
	char str_a[20];
	char *pointer; //указатель массива символов
	char *pointer2;
	

	strcpy_s(str_a, "Hey Git Hub!\n");
	
	pointer = str_a; // установим указатель на начало массива
	pointer2 = pointer + 2; // установим второй указатель на два байта дальше
	printf(pointer);
	printf(pointer2, "\n");// так как char имеет размер 1байт ,то строка начинается с 3 символа


	

}