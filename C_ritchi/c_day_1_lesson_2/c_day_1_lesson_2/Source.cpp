#include <stdio.h>

/*Считаем количество escape sequence в моём случае Табы*/
int main() 
{
	int c, nn;
	nn = 0;
	while( (c = getchar()) != EOF)
		if (c == '\t') {
			nn++;
			printf("%d  escape sequence \t number equal ", nn);
			
		}
}