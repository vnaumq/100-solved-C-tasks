#include <iostream>
#include <cmath>
using namespace std;
int summ(int n, int X0, int *Xm, double detX)
{
    double summ = 0, i, xi = 0, y = 0;
    i = X0;
    int i1 = 0;
    double summa=0;
    while (i <= *Xm)
    {
        xi = X0 + i1 * detX;
        for  (int q = 0; q < n; q++)
        {
            y = (9 - q) * pow(xi, q);
            summa += y;
        }
        cout << xi << " -x" << endl;
        cout << summa << "-y" << endl;
        summa = 0;
        i += detX;
        i1++;    
    }
    cout << summ;
    return summ;
}
int main() 
{
    int n;
    cin >> n;
    int b = 2;
    summ(n, 1, &b, 0.2);
    return 0;
}