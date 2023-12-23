#include <iostream>
#include <cmath>
using namespace std;
double re(int n,int a)
{
    double y = 0.5;
    return pow(a, y);
    y = y * 0.5;
}
int cicle(int n , int a)
{
    double y = 0.5;
   double v,c=0;
    for (int i = 0; i < n; i++)
    {
        v= pow(a, y);
        c += v;
        
        y = y * 0.5;
    }
    
    return v;
}
int main()
{
    setlocale(LC_ALL, "rus");
    /*cout << "Введите n: ";*/
    double a;
    cin >> a;
    
    for (int n = 1; n <= 4;n++)
    {
        cout << "Через цикл: " << cicle(n, a);
        cout << " | Рекурсия: " << re(n,a) << endl;
    }

    /*cout << "Через цикл: " << cicle(n) << endl;
    cout << "Рекурсия: " << re(n);*/
}