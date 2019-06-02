#include <stdio.h>
#include <Windows.h>
#include  "conio.h"
#include  "time.h"

const int N = 13;
int menu;
int menu_1;
double X[N];
int count=0;
bool fl = false;


void vvod_arey() 
{
	system("cls");

	for (int i=0;i < N;i++) 
	{
		printf("Введи число %i >", i+i);
		scanf_s("%lf",&X[i]);
		count++;
	}
	
	fl = true;
}
void rnd_arr() 
{
	srand(time(NULL));
	
	for (int i = 0; i < N; i++) X[i] = rand() % 400 + 20;
	fl = true;
}

void vivod_arr() 
{
	int i;
	system("cls");
	printf("Серия Измерений ");
	for (i = 0; i < N; i++)
	{
		printf("%-4.2lf ",X[i]);
		if (i == 7) printf("\n");
	}
}

void srd_arhm(double X[N]) 
{
	double sum = 0;

	for (int i = 0; i < N; i++) 
	{
		sum += X[i];
	}
	double sred = sum/N;
	printf("\n sum= %-4.2lf ", sum);
	printf("\n Мат. Ожидание = %-4.2lf  \n",sred);
}

int main()
{
	do {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		system("color 1E");
		system("cls");

		printf("Привет, выбери действие.  \n");
		printf("1 - Ввод Массива  \n");
		printf("2- \n");
		printf("3- \n");
		printf("Esc - Выход \n");
		menu = _getch();
		switch (menu)
		{
		case 49: {
			system("cls");
			system("color 2E");
			printf("1 - С клавиатуры  \n");
			printf("2 - Рандомными значениями\n");
			menu_1 = _getch();

			switch (menu_1)
			{
			case 49: {

				       vvod_arey();
				       vivod_arr();

			          } break;
			case 50: {
				       rnd_arr();
					   vivod_arr();
			          } break;
			}

		} break;
		case 50: {
			if (fl == false) break;
			system("cls");
			vivod_arr();
			srd_arhm(X);

		         } break;
		case 51: {} break;
		case 27: {} break;
		}

		system("pause");
	} while (menu != 27);
}