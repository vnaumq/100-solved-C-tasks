// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include<string>



int main()
{
	//setlocale(LC_ALL, "ru");
	//for (int i = 0; i < 255; i++)
	//{
	//	cout << "code = " << i << "\t " << "char =" << char(i) << endl;
	//}

	//const char *string = "Hello";
	//cout << string << endl;

	/*char str1[255] = "Hello";
	char str2[255] = "WORLD!";
	cout << str1 << endl;
	strcat_s (str1, str2);
	cout << str1 << endl;*/
	string str1 = "Hello ";
	string str2 = "WORLD";
	string result;
	result = str1 + str2;
	cout << result << endl;
}

