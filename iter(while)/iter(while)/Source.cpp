#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int i = 0;

	while (i < 100) {
		cout << i << "\t" << i * i << endl;
		++i;
	}
}