#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector <int> v; //������� ��������� ����������
	cout << "������� ����� ������ �����, ��� ��������� �����, ������� ����� ����� � ������� Enter";
	for (int i; cin >> i;) // ������� ��������� i � ���������� �� ������ �����
		v.push_back(i); // append � ������ //push.back �������� � ���������
	// ���� for ������ ������������� vector (����������) 
	for (int i = 0; i < v.size(); ++i)
		cout << "v[" << i << "] == " << v[i] << endl;
}