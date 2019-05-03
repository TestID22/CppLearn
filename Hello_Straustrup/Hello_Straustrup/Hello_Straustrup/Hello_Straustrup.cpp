
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string firstmessage;
	cout << "Hello, Straustrup!\n"; 
	cout << "Передай привет Страусттрупу\n";
	cin >> firstmessage;// ессли вводить Русские символы, то выводит "БЯКУ"
	cout << "Привет, " << firstmessage << "!\n";
	
	
}

