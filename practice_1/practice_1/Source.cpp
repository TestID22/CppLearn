#include <iostream>
#include <string>

using namespace std;
/*  ������� ����������� � ����������� �������� ����������
	� ����� ���� � �����.
*/
int main()
{
	setlocale(LC_ALL, "rus");
	string first, last;
	cout << "������� ��� � �������" << endl;
	cin >> first >> last;
	string full;
	full = first + last;
	cout << "������" << full << "�� �� � �����";
	cin >> first;

	int x, y;
	cout << "������� ����� X";
	cin >> x;
	cout << "������� ����� Y";
	cin >> y;
	if(x == y) {
		cout << "������� ���� ����� �����";
	}
	return 0;
}