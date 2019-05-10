#include <iostream>
#include <string>
using namespace std;

int main()
{
	char n = '\n';
	setlocale(LC_ALL, "ru");
	int i;
	string name;
	for (i = 1; i < 11; i++) {
		cout << "Цикл номер:" <<i << n;
		printf("Hello World\n");
	}
	cin >> name;

}