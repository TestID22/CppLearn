#include <iostream>

using namespace std;
//������������� ��������� ��������� if 
int main()
{
	int a, b;
	setlocale(LC_ALL, "ru");
	cout << "������� ����� ����� ���� (a)";
	cin >> a;
	cout << "������� ����� ����� ��� (b)";
	cin >> b;
	if (a > b)
		cout << "����� ����� ���� ������";
	else 
		cout << "����� ����� ��� ������\n";


	// ��������� ������������� ���������� � �����
	constexpr double cm_per_inch = 2.54;//���������� ����������� � ����� 
	double length = 1; // �����
	char unit = ' ';
	cout << "������� ����� � ������� ��������� 'i' ��� 'c'";
	cin >> length >> unit;
	if (unit == 'i')
		cout << length << " � ����������� - " << cm_per_inch * length << '\n';
	else if (unit == 'c')
		cout << length << " � ������ " << length / cm_per_inch << '\n';
	else
		cout << "� �� �������, ��� �� ��� ��������, ���������";

	
	cout << "Press any key and Enter";
	cin >> a;
}