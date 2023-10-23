// Lab_04_1.cpp
// <������� ����� ���������>
// ����������� ������ � 4.1
// �����.
// ������ 30

#include <iostream>
#include <cmath>
#include <cmath>
using namespace std;
int main()
{
	int N;    // ������� ��������
	double S; // ��������� ���������� ������ 
	double i; // �������� �����

	cout << " N - "; cin >> N;

	// ����� 1: ���� while
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (1 + (i/N)) / pow(i, 2);
		i++;
	}
	cout << S << endl;

	// ����� 2: ���� do while
	S = 0;
	i = 1;
	do {
		S += (1 + (i / N)) / pow(i, 2);
		i++;
	} while (i <= N);
	cout << S << endl;

	// ����� 3: ���� for �� i++
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (1 + (i / N)) / pow(i, 2);
	}
	cout << S << endl;

	// ����� 4: ���� for �� i--
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (1 + (i / N)) / pow(i, 2);
	}
	cout << S << endl;
	return 0;
}