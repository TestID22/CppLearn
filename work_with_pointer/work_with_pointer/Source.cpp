#include <stdio.h>
#include <stdlib.h>
//работа с указателями, явно есть сходство с Неизменяемыми типами данных в Питоне
//Суть реализации изменяемых типов в Питоне, заключается в том, что
//Изменяемые типы данных передаются по указателю, тем самым
//позволяя менять значение в конкретном адрессе памяти, на который показывает
//указатель.

void go_south(int *fnum, int *snum)
{
	*fnum = *fnum + 1;
	*snum = *snum + 100;
}


int main()
{
	int longitude = 1;
	int langoniere = 1;

	int x = 10;

	go_south(&longitude, &langoniere);
	printf("so give me longitude %i and langoniere %i \n", longitude, langoniere);
	printf("First num equal : %i\n", longitude);
	printf("Adress x = : %p", &x);
	return 0;
}