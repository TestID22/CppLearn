#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector <int> v = { 1, 3, 4, 6, 3, 2, 7, 89, 10 }; //последовательность элементов одного типа данных

	for (int x : v)
		cout << x + 1 << endl;

	vector <string> names;
	for (string name; cin >> name;) 
		names.push_back(name);
		cout << "\n Количество элементов в векторе: " << names.size();
		

	int i;
	for (i = 0; i < names.size(); ++i)
		cout << names[i];
	
}