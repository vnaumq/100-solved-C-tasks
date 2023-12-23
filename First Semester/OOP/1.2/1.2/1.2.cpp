#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int isEven(vector<int> mass, int n, int k)
{
	int a;

	for (int i = 0; i < n; i++)
	{
		if (mass[i] % 2 == 0 && mass[i] != 0)
		{
			a = mass[i];
			

			break;
		}
		k++;
	}
	return a;
}
int isOdd(vector<int> mass, int n, int k)
{
	int a;
	for (int i = 0; i < n; i++)
	{
		if (mass[i] % 2 != 0 && mass[i] != 0)
		{
			a = mass[i];
			

			break;
		}
		k++;
	}
	return a;
}
int main()
{
	ofstream  outfile("D:\\First Course\\Programming\\First Semester\\OOP\\txt\\file.txt");
	ofstream out(outfile, ios::binary);
	if (!outfile)
	{
		cout << "File error" << endl;
		return 1;
	}
	//ifstream infile1(("D:\\First Course\\Programming\\First Semester\\OOP\\txtfile.txt"););
	vector<int> mass(8);
	for (int i = 0; i < mass.size(); i++)
	{
		outfile >> mass[i];
	}

	cout << "AAA" << endl;
	for (int i = 0; i < mass.size(); i++)
	{
		cout << mass[i] << endl;
	}
	cout << endl;
	const int m = mass.size();
	vector<int> mass1(8);
	bool b = true;
	int k = 0;
	for (int i = 0; i < 4; i++)
	{

		if (b == true)
		{
			mass1.push_back(isEven(mass, m, k));
			mass[k] = 0;
			b = false;
		}
		if (b == false)
		{
			mass1.push_back(isOdd(mass, m, k));
			mass[k] = 0;
			b = true;
		}
		//b = true; 
	}
	for (int i = 0; i < mass1.size(); i++)
	{
		cout << mass1[i] << endl;
	}
	return 0;
}