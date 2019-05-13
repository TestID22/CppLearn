#include <iostream>

using namespace std;

class BadArea { };

int area(int length, int width)
{
	if (length <= 0 || width <= 0)
		return length * width;
}

int main()
{
	setlocale(LC_ALL, "ru");
	try {
		int x = -1, y = 3, z = 2;
		//В переменную ареа1 помещаем результат нашей функции
		int area1 = area(x, y);
		int area2 = area(1, z);
		int area3 = area(z,x);
		double ratio = area1 / area3;
	}
	catch (BadArea) {
		cout << "Ты что творишь?";
		}
}