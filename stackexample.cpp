#include <stdio.h>

void function(int a, int b, int c, int d)
{
	/* СУПЕР ВАЖНО 
	память этих переменных, а они локальные
	ХРАНИТСЯ В СТЕКЕ в его сегменте!!!
	*/
	int flag;    // 4 байта 
	char buffer[10];  // char 10 - 10 байт резервируем под массив
	flag = 13338; 
	buffer[0] = 'A';
}

int main()
{
	function(1, 2, 4, 6);
}