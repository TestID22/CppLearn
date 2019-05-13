#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector <int> v; //Создали контейнер целыхчисел
	cout << "Вводить нужно только числа, для окончания ввода, введите любую букву и нажмите Enter";
	for (int i; cin >> i;) // создали перменную i и накидываем из потока ВВОДА
		v.push_back(i); // append в питоне //push.back заливаем в контейнер
	// Цикл for служит распоковщиком vector (контейнера) 
	for (int i = 0; i < v.size(); ++i)
		cout << "v[" << i << "] == " << v[i] << endl;
}