
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n,a,b,c,q;
    cin >> n;
    a = 1;
    q = 0;
    if (n>10)
    {
        cout << 2 << endl << 3 << endl << 5 << endl << 7 << endl;
        while (q<n)
        {
            a++;
            q++;
            if ((a % 2 == 0) || (a % 3 == 0) || (a % 5 == 0) || (a % 7 == 0))
                cout << "";
            else
            {
                cout << a << endl;
            }
        }
    }
    else
        cout << " не подлежит условию задачи ";

    
}

