// Lab_04_1.cpp
// <Придиба Роман Орестович>
// Лабораторна робота № 4.1
// Цикли.
// Варіант 30

#include <iostream>
#include <cmath>
#include <cmath>
using namespace std;
int main()
{
	int N;    // вхідний аргумент
	double S; // результат обчислення виразу 
	double i; // лічильник циклу

	cout << " N - "; cin >> N;

	// спосіб 1: Цикл while
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (1 + (i/N)) / pow(i, 2);
		i++;
	}
	cout << S << endl;

	// спосіб 2: Цикл do while
	S = 0;
	i = 1;
	do {
		S += (1 + (i / N)) / pow(i, 2);
		i++;
	} while (i <= N);
	cout << S << endl;

	// спосіб 3: Цикл for де i++
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (1 + (i / N)) / pow(i, 2);
	}
	cout << S << endl;

	// спосіб 4: Цикл for де i--
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (1 + (i / N)) / pow(i, 2);
	}
	cout << S << endl;
	return 0;
}