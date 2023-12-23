#include <iostream>
using namespace std;
double F(double X){
    return pow((X + 3), 3) - 8;
}
double F1(double* X1){
    return 3 * *X1 * *X1 + 18 * *X1 + 27;
}
int main() {
    setlocale(LC_ALL, "rus");
    const double eps = 1e-6;
    double a = -2;    double b = 1;
    double x;   int i = 0;
    double x1;   double x0;
    cout << "Введите начальное приближение к корню на промежутке [" << a << ";" << b << "]" << endl;
    cin >> x0;
    do {
        x1 = x0 - (F(x0) / F1(&x0));
        i++;
        if (F(x1) == 0.0)
            break;
        x0 = x1;
    } while (abs(F(x1)) > eps);
    x = x1;
    cout << endl;
    cout << "Корень уравнения = " << x << endl;
    cout << "Количество итераций = " << i << endl;
    cout << "f(x0) = " << F(x) << endl;
    return 0;
}