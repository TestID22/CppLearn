#include <stdio.h>
#include <Windows.h>
#include <locale.h>

#define MAXSIZE 50

int main()
{
	char *locale = setlocale(LC_ALL, "ru");
	char a, b, *p;
	char name[MAXSIZE];

	strcpy_s(name, "Кирилица в консоли в страшном СИ!");

	a = '1';
	printf("Переменная до указателя равна : %c\n", a);


	p = &a;
	*p = 65; //тем самым указатель меняет значение переменной
	printf("Указателем меняем переменную и она равно %c \n" , a);
	printf("Адресс памяти переменной а %p\n", &a);

	printf("%c\t %s\n", a , name);
	//Задача пройтись по символам строки
	for (int i = 0; i < strlen(name); i++)
	{
		printf("%i - Номер буквы %c\n", (i + 1), name[i]);
		system("color 1f");
		
	}
	



	system("pause");

}