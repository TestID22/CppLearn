#include <iostream>

using namespace std;
//Использование условного оператора if 
int main()
{
	int a, b;
	setlocale(LC_ALL, "ru");
	cout << "Введите Число номер один (a)";
	cin >> a;
	cout << "Введите Число номер два (b)";
	cin >> b;
	if (a > b)
		cout << "Число номер один больше";
	else 
		cout << "Число номер два больше\n";


	// программа преобразующая сантиметры в дюймы
	constexpr double cm_per_inch = 2.54;//количество сантиметров в дюйме 
	double length = 1; // длина
	char unit = ' ';
	cout << "ВВедите длину и единицу измерения 'i' или 'c'";
	cin >> length >> unit;
	if (unit == 'i')
		cout << length << " в сантиметрах - " << cm_per_inch * length << '\n';
	else if (unit == 'c')
		cout << length << " в дюймах " << length / cm_per_inch << '\n';
	else
		cout << "Я не понимаю, что ты мне подсунул, бестолочь";

	
	cout << "Press any key and Enter";
	cin >> a;
}