#include <iostream>

using namespace std;
//�������� �������, � � ���������� � ����� for.
int square(int x) 
{
	return x * x;
}
int main()
{
	setlocale(LC_ALL, "ru");

	int i;
	for(i = 0; i < 100; i+= 2) {
		cout << i << '\t' << square(i) << endl;
	}
}