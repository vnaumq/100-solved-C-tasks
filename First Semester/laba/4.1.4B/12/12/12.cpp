// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>                        // для strlen
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char input[256];
	int a = 0;

	int k;
	cout << "Введите строку: ";
	cin >> input;
	cout << "Строка " << input << " содержит " << strlen(input) << " символов\n";
	for (int i = 0; i < strlen(input); i++)
	{
		for (int j = 0; j < strlen(input); j++)
		{
			if (input[i] == input[j])
			{
				a++;
				if (a >= 2)
				{
					input[j] = '.';
					break;
				}
			}




		}
		a = 0;
	}
	for (int i = 0; i < strlen(input); i++)
	{
		cout << input[i];
	}


}
