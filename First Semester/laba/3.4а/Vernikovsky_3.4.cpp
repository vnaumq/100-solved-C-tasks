#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <stdlib.h>

/*
����� �������� �������� �������, ���������� ������ ����� ��������,
������� �� ������ �� ������ ��������� ������������ N, ����� ������ � ��-
��������� ������������� ���������. 


����� ����� ��������� ��� �����, � ��-
����� ��������� ���������� ������� �������.
*/
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	const int N = 10;
	const int n = 5;
	int b[n][n] = { 0,1,2,3,4,0,1,4,5,3,4,0,2,3,2,3,4,1,0,3,4,2,3,1,4 };
	int z;
	cout << "1 - �  ��������������, 2 - ����������� ��������� �������� , 2 - ���� ����������� �������� " << endl;
	cout << "z=";
	cin >> z;
	switch (z) {
	case 1:
		break;
	case 2:
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				b[i][j] = rand() % N - N;
		break;
	case 3:
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> b[i][j];
		break;

	default:
		cout << "�������� ��������,������� 1 ���� 2, ���� 3" << endl;
		return 1;
	}

	cout << endl << " massiv b" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << b[i][j];
		cout << endl;
	}

	int sum = 0;
	int max = b[0][0];
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < b[i][j])
			{
				max = b[i][j];
				k = i;                   // ����� ������
			}
		}
	}

	for (int j = 0; j < n; j++) {
		sum += b[k][j];
	}

	cout << "����� ��������� ��� �����, � ������� ��������� ���������� ������� ������� = " << sum << endl;

	//����� ������� � ����������� ������������� ���������.

	int proizv[n] = { 1,1,1,1,1 };

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			proizv[j] *= b[i][j];
		}
	}

	int count = INT_MAX;
	int index = 0;

	for (int j = 0; j < n; j++) {
		if (count > proizv[j]) {
			count = proizv[j];
			index = j;
		}

	}
	cout << "������� � ����������� ������������� ��������� =" << index;
	system("pause");

}