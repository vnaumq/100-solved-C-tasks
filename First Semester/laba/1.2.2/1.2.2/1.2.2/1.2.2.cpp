#include <iostream> 
#include <math.h>

using namespace std;
int main()
{
    double  n;
    int a, b, c, d;
    setlocale(LC_ALL, "Rus");

    cout << " Ввод n=";
    cin >> n;

    if (n < 0)
    {
        cout << "Ошибка";
        return 0;
    }
    a = int(n * 10) % 10;
    b = int(n * 100) % 10;
    c = int(n * 1000) % 10;
    d = int(n * 10000) % 10;

    if (int(a + b) == int(c + d))
        cout << "Да" << endl;
    else
        cout << "Нет" << endl;

}