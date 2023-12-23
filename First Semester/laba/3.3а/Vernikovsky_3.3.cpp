#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << " Введите 1 для ввода с клавиатуры , 2 - для использования инициализированных элементов, 3 - для использования случайных элементов" << endl;
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
			cout << "Введите элементы массива" << endl;
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
				cout << setw(3) << x[i];// Задаем ширину отображения поля
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
			cout << "Неверное значение,введите 1 либо 2, либо 3" << endl;
			return 1;
	}


	//Вычислить сумму тех элементов вектора Х,
	//SUM(X), WHERE(Index_X == Value_Y)
	//индексы которых совпадают со значениями элементов массива Y.
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

