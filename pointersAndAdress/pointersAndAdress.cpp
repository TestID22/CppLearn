#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int const SIZE = 10;
	int	arr[SIZE]{ 10,2,4,56 };

	int *pa = arr;

	//��������� pa ��������� �� ������, �� �� ����� arr = ��� ��������� �� ������ ������� �������

	for (int i = 0; i < SIZE; i++)
	{
		cout << " ������ - "<< arr[i] << " ���������� ����� ������� [" << i << "]"  << " ������ � ������ " << pa + i << endl;
	}
	system("pause");

	return 0;
}
