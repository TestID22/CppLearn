#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	constexpr double uah_per_usd = 0.038;
	double cost = 1;
	char unit = ' ';
	cout << "������� ���������� ������ � ������ ����� ������\n";
	cout << "��� ��������� 'g' ��� ������ ������ 'd'\n";
	cin >> cost >> unit;
	switch (unit) {
	case 'g':
		cout << "�� ���� " << cost << "������ ���� ����� " << cost * uah_per_usd << " ���������";
		break;
	case 'd':
		cout << "�� ���� " << cost << "����� ���� ������ " << cost / uah_per_usd << "���������";
		break;
	default:
		cout << "����� ������ �� ����";
		break;
	}
	cin >> unit;
}