#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
void result(char* str)
{
	string result = "";
	int len = strlen(str);

	int h = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'c' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'd')
		{
			h = 1;
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			result += str[i];
		}

		if (h == 1 && str[i] == 'd')
		{
			result += 'r';
			result += 'e';
			result += 'n';
			h = 0;
		}


	}
	cout << result;
}
int main()
{

	char* str = new char[1000];
	cin >> str;
	result(str);
}
