#include <stdio.h>
#include <Windows.h>
#include <locale.h>

#define MAXSIZE 50

int main()
{
	char *locale = setlocale(LC_ALL, "ru");
	char a, b, *p;
	char name[MAXSIZE];

	strcpy_s(name, "�������� � ������� � �������� ��!");

	a = '1';
	printf("���������� �� ��������� ����� : %c\n", a);


	p = &a;
	*p = 65; //��� ����� ��������� ������ �������� ����������
	printf("���������� ������ ���������� � ��� ����� %c \n" , a);
	printf("������ ������ ���������� � %p\n", &a);

	printf("%c\t %s\n", a , name);
	//������ �������� �� �������� ������
	for (int i = 0; i < strlen(name); i++)
	{
		printf("%i - ����� ����� %c\n", (i + 1), name[i]);
		system("color 1f");
		
	}
	



	system("pause");

}