// 2.5.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    int a, b, n,c,v;
    cin >> n;
    a = 0;
    b = 0;
    c = 0;
    v = 0; 
    if (n <= 9)
        cout << n;
    else
    {

        while (true)
        {
            a++;
            while (b < 9)
            {
                
                b++;
                c++;
                if ((n % 2 == 0) && ((a * 10) + c + b == n))
                {
                    cout << a;
                    return 0;
                }
                if (!(n % 2 == 0) && ((a * 10) +(b*n) - n == n))
                { 
                    cout << b;
                return 0;
            }
            }
            b = 0;
            c = 0;
        }


    }

}

