
#include <iostream>
using namespace std;
//return
int func(int g)
{
	int a = 7;
	short c = 1;
	for (int i = 0; true; i++)
	{
		c = pow(a, i);
		if (c <= 0)
		{
			g = i - 1;
			break;
		}
	}
	return g;
}
//указатель
int func1(int *g)
{
	int a = 7;
	short c = 1;
	for (int i = 0; true; i++)
	{
		c = pow(a, i);
		if (c <= 0)
		{
			*g = i - 1;
			break;
		}
	}
	return *g;
}
//ссылка 
int func2(int &g)
{
	int a = 7;
	short c = 1;
	for (int i = 0; true; i++)
	{
		c = pow(a, i);
		if (c <= 0)
		{
			g = i - 1;
			break;
		}
	}
	return g;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int x=0;
	cout << func(x)<<"-return"<<endl;
	cout << func1(&x)<<"-указатель"<<endl;
	cout << func2(x)<<"-ссылка"<<endl;
	int q = 7;
	int&r = q;
	r = r + 1;
	cout << q;
	cout << r;

}

