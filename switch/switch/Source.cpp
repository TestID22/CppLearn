#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	constexpr double uah_per_usd = 0.038;
	double cost = 1;
	char unit = ' ';
	cout << "Введите Количетвно налика и первую букву валюты\n";
	cout << "Для Гривастых 'g' для Убитых Енотов 'd'\n";
	cin >> cost >> unit;
	switch (unit) {
	case 'g':
		cout << "За твои " << cost << "гривен тебе дадут " << cost * uah_per_usd << " бакинских";
		break;
	case 'd':
		cout << "За твои " << cost << "бачей тебе светит " << cost / uah_per_usd << "гривастых";
		break;
	default:
		cout << "Такой валюты не знаю";
		break;
	}
	cin >> unit;
}