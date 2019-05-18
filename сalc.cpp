#include <iostream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int fnum, snum;
	cout << "¬ведите два числа" << endl;
	cout << "¬ведите число номер один :";
	cin >> fnum;
	cout << "\n¬ведите число номер два :";
	cin >> snum;
	cout << fnum << "¬ведите знак \n ¬веди 1 дл€ знака + " << snum;
	char operators;
	cin >> operators;
	if (operators == '1') 
	{
		int result;
		result = fnum + snum;
		cout << "–езультат равен :" << result;
	}
	string res;
	cin >> res;


}