#include <stdio.h>
#include <string.h>
int main(int arg_count, char *arglist[])
{	
	for(int i = 1; i < arg_count; i++){
		printf("%d number \t %s\n", i, arglist[i]);
	}
	return 0;
}