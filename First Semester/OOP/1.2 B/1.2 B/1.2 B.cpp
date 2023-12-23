#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

void read_file(fstream& infile)
{
    double x;
    while (infile.read(reinterpret_cast<char*>(&x), sizeof(x)))
    {
        cout << x << endl;
    }
}

void write(fstream& f, fstream& g, fstream& h, fstream& j)
{
    int c = 3;
    int x = 0;
    int y = 0;
    int num;
    while (f.read((char*)&num, sizeof(num)))
    {

        if (y < 2 && num % 2 != 0 && c != 0) {
            g.write((char*)&num, sizeof(num));
            y++;
            if (y == 2)
            {
                c = 0;
            }
        }
        else if (x < 2 && num % 2 == 0 && c != 1) {
            g.write((char*)&num, sizeof(num));
            x++;
            if (x == 2)
            {
                c = 1;
            }

        }
        else
        {
            h.write((char*)&num, sizeof(num));
        }
        if (x == 2 && y == 2) {
            // Если уже записали 2 четных и 2 нечетных числа, то сбрасываем счетчики
            x = 0;
            y = 0;
        }
    }
    h.close();
    h.open("h.bin", ios::out | ios::binary | ios::trunc);
    int num1;
    while (h.read((char*)&num1, sizeof(num1)))
    {

        if (y < 2 && num1 % 2 != 0 && c != 0) {
            g.write((char*)&num1, sizeof(num1));
            y++;
            if (y == 2)
            {
                c = 0;
            }
        }
        else if (x < 2 && num1 % 2 == 0 && c != 1) {
            g.write((char*)&num1, sizeof(num1));
            x++;
            if (x == 2)
            {
                c = 1;
            }

        }
        else
        {
            j.write((char*)&num1, sizeof(num1));
        }
        if (x == 2 && y == 2) {
            // Если уже записали 2 четных и 2 нечетных числа, то сбрасываем счетчики
            x = 0;
            y = 0;
        }
    }
    j.close();
    j.open("j.bin", ios::out | ios::binary | ios::trunc);
    int num2;
    while (j.read((char*)&num2, sizeof(num2)))
    {
        if (y < 2 && num2 % 2 != 0 && c != 0) {
            g.write((char*)&num2, sizeof(num2));
            y++;
            if (y == 2)
            {
                c = 0;
            }
        }
        else if (x < 2 && num2 % 2 == 0 && c != 1) {
            g.write((char*)&num2, sizeof(num2));
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



int main() {
    setlocale(LC_ALL, "ru");


    // открытие файла для чтения
   
    int x[12] = { 4, 6 ,8 ,3 ,11, 13, 22, 15, 44, 33, 66, 77 };
    fstream fin("f.bin", ios::binary|ios::in|ios::app);
    for (int i = 0; i < 12; i++)
    {
        fin.write((char*)&x[i], sizeof(int));
    }
    fin.close();
    fstream fin1("f.bin", ios::binary | ios::out);
    if (!fin1.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }
    read_file(fin1);
    fin1.close();
    // открытие файла для записи
    fstream g("g.bin", ios::binary|ios::out);
    if (!g) {
        cout << "Ошибка при открытии файла" << endl;
        return 0;
    }
    g.clear();
    g.close();

    fstream h("h.bin", ios::binary| ios::out  );
    if (!h) {
        cout << "Ошибка при открытии файла1" << endl;
        return 0;
    }

    fstream j("j.bin", ios::out  | ios::binary);
    if (!j) {
        cout << "Ошибка при открытии файла" << endl;
        return 0;
    }

    fin.open("f.bin", ios::binary);
    g.open("g.bin", ios::binary);
    write(fin1, g, h, j);
    h.close();
    fin.close();
    g.close();
    j.close();

    return 0;
}