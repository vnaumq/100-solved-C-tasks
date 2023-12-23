#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
void read_file(ifstream& infile)
{
	double x;
	while (infile >> x) 
	{
		cout << x << endl;
		
	}
}
void write(ifstream& f, ofstream& g , fstream& h,fstream& j)
{
	int c = 3;
	int x = 0;
	int y = 0;
	int num;
	while (f >> num) {
		
		if (y<2 && num % 2 != 0 &&c!=0 ) {
			g << num << " ";
			y++;
			if (y==2)
			{
				c = 0;
			}
		}
		 else if (x<2 && num % 2 == 0&&c!=1) {
			g << num << " ";
			x++;
			if (x==2)
			{
				c = 1;
			}
			
		}
		 else
		 {
			 h << num;
			 h << " ";
			 
		 }
		if (x == 2 && y == 2) {
			// Если уже записали 2 четных и 2 нечетных числа, то сбрасываем счетчики
			x = 0;
			y = 0;
		}
	}
	h.close();
	h.open("h.txt");
	int num1;
	while (h >> num1) {

		if (y < 2 && num1 % 2 != 0 && c != 0) {
			g << num1 << " ";
			y++;
			if (y == 2)
			{
				c = 0;
			}
		}
		else if (x < 2 && num1 % 2 == 0 && c != 1) {
			g << num1 << " ";
			x++;
			if (x == 2)
			{
				c = 1;
			}

		}
		else
		{
			j << num1;
			j << " ";
		}
		if (x == 2 && y == 2) {
			// Если уже записали 2 четных и 2 нечетных числа, то сбрасываем счетчики
			x = 0;
			y = 0;
		}
	}
	j.close();
	j.open("j.txt");
	int num2;
	while (j >> num2) {
		if (y < 2 && num2 % 2 != 0 && c != 0) {
			g << num2 << " ";
			y++;
			if (y == 2)
			{
				c = 0;
			}
		}
		else if (x < 2 && num2 % 2 == 0 && c != 1) {
			g << num2 << " ";
			x++;
			if (x == 2)
			{
				c = 1;
			}

		}
		if (x == 2 && y == 2) {
			// Если уже записали 2 четных и 2 нечетных числа, то сбрасываем счетчики
			x = 0;
			y = 0;
		}
	}
}



int main()
{
	setlocale(LC_ALL, "ru");
	string path = "f.txt";
	/*Запись в файл. c++ ofstream*/
	ifstream fin;
	fin.open(path, ofstream::app);
	if (!fin.is_open())
	{
		cout << "Ошибка" << endl;
	}
	read_file(fin);
	fin.close();
	
		ofstream g;
		g.open("g.txt");
		if (!g)
		{
			cout << "Ошибка" << endl;
		}
		g.clear();
		g.close();
		fstream h;
		h.open("h.txt", std::ios::out);
		if (!h.is_open())
		{
			cout << "Ошибка" << endl;
		}
		fstream j;
		j.open("j.txt", std::ios::out);
		if (!h.is_open())
		{
			cout << "Ошибка" << endl;
		}
		
		fin.open("f.txt");
		g.open("g.txt");
		write(fin, g,h,j);
		h.close();
		fin.close();
		g.close();
		j.close();
		
}