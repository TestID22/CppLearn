#include <iostream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int fnum, snum;
	cout << "������� ��� �����" << endl;
	cout << "������� ����� ����� ���� :";
	cin >> fnum;
	cout << "\n������� ����� ����� ��� :";
	cin >> snum;
	cout << fnum << "������� ���� \n ����� 1 ��� ����� + " << snum;
	char operators;
	cin >> operators;
	if (operators == '1') 
	{
		int result;
		result = fnum + snum;
		cout << "��������� ����� :" << result;
	}
	string res;
	cin >> res;


}