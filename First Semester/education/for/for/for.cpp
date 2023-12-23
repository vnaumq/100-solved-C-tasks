// for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{


    setlocale(LC_ALL, "ru");
    using namespace std;


    int i = 0;
    for (; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << "переменная i = " << i << endl;
    }
    cout << "2 цикл" << endl;
    /*for (; true; i++)
    {
        cout << "переменная i = " << i << endl;
        if (i == 5)
        {
            break;
        }
    }*/

}


