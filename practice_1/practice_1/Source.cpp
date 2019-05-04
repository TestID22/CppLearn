#include <iostream>
#include <string>

using namespace std;
/*  Пытаюсь разобраться с переменными Условным оператором
	а также ВВОД и ВЫВОД.
*/
int main()
{
	setlocale(LC_ALL, "rus");
	string first, last;
	cout << "Введите имя и фамилию" << endl;
	cin >> first >> last;
	string full;
	full = first + last;
	cout << "Привет" << full << "ну ты и ламер";
	cin >> first;

	int x, y;
	cout << "Введите число X";
	cin >> x;
	cout << "Введите число Y";
	cin >> y;
	if(x == y) {
		cout << "Введёные вами числа равны";
	}
	return 0;
}