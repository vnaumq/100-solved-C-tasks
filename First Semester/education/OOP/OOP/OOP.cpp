#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this-> x= x;
		this->y = y;
		this->z = z;
	}
	/*void Print()
	{
		cout << "X:" << x << "\t Y:" << y << "\t Z:" << z << endl;
	}*/

	int x;
	int y;
	int z;
};

ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}
int main()
{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	/*Запись в файл. c++ ofstream*/
	/*
	ofstream fout;
	fout.open(path,ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else 
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите число !" << endl;
			int a;
			cin >> a;
			fout << a;
			fout << "\n";
		}
	}
	fout.close(); */
	/*Чтение из файла с++ ifstream*/
	/*
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout<<"файл открыт "<<endl;
		string str[50];
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			fin.getline(str, 50);
			cout << str << endl;
		}
		/*
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
		
	}
	fin.close();
	*/
	/*Чтение и запись в файл с++ используя класс fstream*/
	/*
	Point point(155, 160, 246);
	point.Print();
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout << "файл открыт " << endl;
		fout.write((char*)&point, sizeof(Point));
	}
	fout.close();
	*/
	/*
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout << "файл открыт " << endl;
		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.Print();
		}
	}
	fin.close();
	*/
	/*Потоковый ввод вывод в файл c++. Перегрузка операторов*/
	/*
	Point point(122, 156, 292);

	//cout << point;

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
		
	}
	else
	{
		cout << "Файл открыт!" << endl;
		//fs << point << "\n";
		while (true)
		{
			
			Point p;
			fs >> p;
			if (fs.eof())
			{
				break;
			}
			cout << p << endl;
		}
		
	}
	fs.close();
	*/


	return 0;

} 

