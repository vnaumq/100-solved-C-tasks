#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;
double F(double x, int s)
{
    return s * x - pow(cos(M_PI * x), 2);
}

double F1(double x, int s)
{
    return s + sin(M_PI * x) * 2 * cos(M_PI * x) * M_PI;
}

bool newton(double a, double b, double eps, double x0, double& root, int i, int s)
{
    double x, xn;
    x = x0;
    while (true)
    {
        xn = x - F(x, s) / F1(x, s);
        if (fabs(x - xn) < eps)
            break;
        x = xn; i++;
    }
    if ((x > b))
        return false;
    root = xn;
    cout << "Количетсво итераций = " << i << endl;
    return true;
}


int main()
{
    setlocale(LC_ALL, "rus");
    double a, b; //Границы интервала
    double eps; //Точность
    double x0; //Начальная точка 
    double root; //Корень
    a = -1; int  s = 1;
    b = 0.7;
    int i = 0;
    cout << "Введите начальную точку x0 " << endl;
    cin >> x0;

    eps = 1e-6;
    if (newton(a, b, eps, x0, root, i, s))
    {
        cout << "Искомый корень " << root << endl;
    }
    else
    {
        cout << "Решение не найдено" << endl;
    }
    cout << F(root, s) << endl;
    return 0;
}

