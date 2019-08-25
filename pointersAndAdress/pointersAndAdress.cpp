#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int const SIZE = 10;
	int	arr[SIZE]{ 10,2,4,56 };

	int *pa = arr;

	//указатель pa указывает на массив, но по факту arr = это указатель на первый элемент массива

	for (int i = 0; i < SIZE; i++)
	{
		cout << " ƒанные - "<< arr[i] << " ѕор€дковый номер массива [" << i << "]"  << " адресс в пам€ти " << pa + i << endl;
	}
	system("pause");

	return 0;
}
