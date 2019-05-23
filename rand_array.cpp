#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));// for random nums we used srand and lib CTIME

	int secret_number = rand() % 10;
	int const NUM_SIZE = 10;
	int numbers[NUM_SIZE];
	cout << "Тут случайное число [" <<secret_number<< "]" << endl;

	for (int i = 0; i < NUM_SIZE; i ++) {
		numbers[i] =  rand() % 20 + 1;
		cout << "Тут массив случайных чисел " << numbers[i]<< endl;
		;
	}
}