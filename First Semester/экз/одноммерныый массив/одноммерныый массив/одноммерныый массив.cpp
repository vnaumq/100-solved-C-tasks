#include <cmath>
#include <iostream>
using namespace std;

void cinc(int*& a, int*& b, int n, int n1)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
	for (int i = 0; i < n1; i++)
	{
		b[i] = rand() % 10;
	}
}
void ccout(int*& a, int*& b, int n, int n1)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n1; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
int result(int*& a, int*& b, int n, int n1)
{

	int result = 100;
	for (int i = 0; i < n; i++)
	{
		bool found = false;
		for (int j = 0; j < n1; j++)
		{
			if (a[i] == b[j])
			{
				found = true;
				break;
			}
		}
		if (!found && a[i] < result)
		{
			result = a[i];
		}
	}
	if (result == -1)
	{
		cout << ":)" << endl;
	}
	else
	{
		cout << result;
	}
	return result;
}
int main()
{
	setlocale(LC_ALL, ("ru"));
	int n, n1;
	cin >>n;
	cin >>n1;
	int *a=new int[n];
	int *b=new int[n1];
	
	cinc(a, b, n, n1);
	ccout(a, b, n, n1);
	result(a, b, n, n1);
	
	
	
}
