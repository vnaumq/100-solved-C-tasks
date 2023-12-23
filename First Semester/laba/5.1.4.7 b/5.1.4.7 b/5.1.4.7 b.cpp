#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;
double F(double X,int s)
{
    return cos(M_PI*X)-pow(X,s);
}

double F1(double X1,int s)
{
    return -M_PI*sin(M_PI*X1)-s*pow(X1,s-1);
}

double root(double (*f)(double, int), double a, double b, double eps, int& i, double x0, int s)
{
    double u, x1;
    do
    {
        x1 = x0 - (F(x0, s) / F1(x0, s));
        if (F(x1, s) == 0.0)
            break;
        x0 = x1;
        i++;
    } while (abs(F(x1, s)) > eps);
    u = x1;
    return u;
}
void fff() { cout << "asdfghj" << endl;  }
int main()
{
    void (*gg)();
    gg = fff;
    gg();
    setlocale(LC_ALL, "rus");
    const double eps = 1e-6;
    double a = 0;    double b = 2;
    double x;    int i = 0;
    double x0;   int s = 3;
    cout << "Введите начальное приближение к корню на промежутке [" << a << ";" << b << "]" << endl;
    cin >> x0;
    x = root(F, a, b, eps, i, x0, s);
    cout << endl;
    cout << "Корень уравнения = " << x << endl;
    cout << "Количество итераций = " << i << endl;
    cout << "Значение f(x0) = "<< F(x,s)<<endl;
    return 0;
}