#include <stdio.h>

/*������� ���������� escape sequence � ��� ������ ����*/
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