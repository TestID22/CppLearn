#include <stdio.h>

//через entry point забираем аргументы из ком строки.

int main(int arg_num, char *arg_name[])
{
	int i;
	for (i = 0; i < arg_num; i++)
		printf("Argument number [%d]  - %s\n", i,  arg_name[i]);
}