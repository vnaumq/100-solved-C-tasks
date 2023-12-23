#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << " ������� 1 ��� ����� � ���������� , 2 - ��� ������������� ������������������ ���������, 3 - ��� ������������� ��������� ���������" << endl;
	int z;
	cout << "z= ";
	cin >> z;

	int const n = 10;
	int const m = 9;
	int x[n] = { 0,2,6,4,8,9,3,5,7 } ;
	int y[m] = { 0,1,2,3,4,5,6 };

	int sum = 0;

	switch (z) {
		case 1:
			cout << "������� �������� �������" << endl;
			for (int i = 0; i < n; i++) {
				cin >> x[i];
			}
			cout << endl;
			for (int i = 0; i < m; i++) {
				cin >> y[i];
			}
			break;
		case 2:
			for (int i = 0; i < n; i++) {
				cout << setw(3) << x[i];// ������ ������ ����������� ����
			}
			cout << endl;
			for (int i = 0; i < m; i++) {
				cout << setw(3) << y[i];
			}
			break;
		case 3:
			for (int i = 0; i < n; i++) {
				x[i] = rand() % (10 + 10) - 10;
				cout << setw(3) << x[i];
			}	
			cout << endl;
			for (int i = 0; i < m; i++) {

				bool generate = true;
				while (generate) {
					y[i] = rand() % n;
					
					generate = false;
					for (int j = 0; j < i; j++) {
						if (y[j] == y[i]) {
							generate = true;
						}
					}
				}
				cout << setw(3) << y[i];
			}
			break;

		default: 
			cout << "�������� ��������,������� 1 ���� 2, ���� 3" << endl;
			return 1;
	}


	//��������� ����� ��� ��������� ������� �,
	//SUM(X), WHERE(Index_X == Value_Y)
	//������� ������� ��������� �� ���������� ��������� ������� Y.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == y[j])
			{
				sum += x[i];
			}
		}
	}

	cout << endl << sum << endl;
	system("pause");
	return 0;
}

