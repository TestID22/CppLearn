#include <stdio.h>

int main()
{
	int c, i, nwhite, nother;
	int digit[10];

	nwhite = nother = 0;

	for (i = 0; i < 10; ++i)
		digit[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++digit[c - '0'];




}