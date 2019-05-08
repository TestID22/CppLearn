#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c, nw, nl, no, state;
	state = OUT;
	nw = nl = no = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nw++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			nw++;
		}
	printf("%d  %d , %d\n", nw, nl, no);
	}
	

}