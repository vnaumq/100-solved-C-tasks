#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	const int MAX = 100;
	char str[MAX];

	cout << "Введите строку: ";
	cin >> setw(MAX) >> str;

	char c;
	int i = 0, j, len = strlen(str);
	while (i < len) {
		c = str[i];
		int k = 1;
		for (j = 0; j < len; j++) if (j != i && str[j] == c) k++;
		if (k == 1) {
			for (j = i; j < len; j++) str[j] = str[j + 1];
			len--; i--;
		}
		i++;
	}
	cout << "\n Результат:" << str << endl;



	return 0;
}