#include <iostream>
#include <stdio.h>
// Учу С++ по Книге Страуструпа.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int width = 20, heigth = 20;
	int area = width * heigth;
	const int perimetr = (width * heigth) * 2;
	char n = '\n';
	cout << "Площадь = :" << area << n << "Периметр равен = :"<< perimetr;
	cout << "Периметр это константа";
}