#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string str, word1, word2;
	cout << "Введите текст: ";
	getline(cin, str);
	int c;
	for (int i = 0 ; word1.empty(); i++)
	{
		if (isalpha(str[i]))
			for (i; i < str.size() && isalpha(str[i]); i++)
		{
				word1.append(1, str[i]);
				c = i;
		}
		else
		{
			i++;
		}
		
	}

	cout <<" Первое слово: " << word1 << endl;
	bool a;
	while (c<str.size())
	{
		if (isalpha(str[c]))
		{
			a = true;
			word2.erase(0, word2.length());
			while (c < str.size() && isalpha(str[c]))
			{
				word2.append(1, str[c]);
				if (word1.find(str[c]) == -1)
					a = false;
				c++;


			}
			if (a)
				cout << word2 << endl;


		}
		else c++;





	}

	return 0;










}
