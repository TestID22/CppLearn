#include <stdio.h>
#include <string>

int main()
{
	char str_a[20];
	char *pointer; //��������� ������� ��������
	char *pointer2;
	

	strcpy_s(str_a, "Hey Git Hub!\n");
	
	pointer = str_a; // ��������� ��������� �� ������ �������
	pointer2 = pointer + 2; // ��������� ������ ��������� �� ��� ����� ������
	printf(pointer);
	printf(pointer2, "\n");// ��� ��� char ����� ������ 1���� ,�� ������ ���������� � 3 �������


	

}