#include <iostream>
#include <stdio.h>
// ��� �++ �� ����� �����������.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int width = 20, heigth = 20;
	int area = width * heigth;
	const int perimetr = (width * heigth) * 2;
	char n = '\n';
	cout << "������� = :" << area << n << "�������� ����� = :"<< perimetr;
	cout << "�������� ��� ���������";
}