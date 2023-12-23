#include <iomanip>  
#include <stdlib.h>    // rand  srand
#include <time.h>     // time
#include <iostream>    // cin cout
using namespace std;

int main()
{
	const int n = 5;
	int i, j;
	int a[n][n];
	srand(time(NULL));
	cout << " massiv a" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 10;       // заполнение

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << setw(3) << a[i][j];     // вывод на экран
		cout << endl;
	}
	 /*for (int i = 2 ; i < n; i++)
	{
   		for (int j = i; j <= n - (i+1); j++)
		{
			sum += a[i][j];
		}


	
	}*/
	int sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i; j >= n - 1 - i; j--)
		{
			sum += a[i][j];
		}

	}

	cout << " summa elementov nizhnego treygolnika  = " << sum << endl;

}
