#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename rururu, typename rururuu>
void ran(rururu a[], rururuu b)
{
    srand(time(0));
    for (int i = 0; i < b; i++)
    {
        a[i] = rand() % 10 - 5;
    }
}
void random(int* a, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
    }
}

void increase(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

void decrease(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }
}

void coutc(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "-------------------------";
    cout << endl;
}
//
void shift(int* a, int n, int K)
{
    for (int k = 0; k < (K % n); k++)
    {
        int x = a[0];
        for (int i = 1; i<n; i++)
        {
            a[i-1] = a[i];
        }
        a[n-1] = x;
    }

}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите размерность динамического массива" << endl;
    cin >> n;
    cout << "-------------------------" << endl;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    cout << "1.Рандом" << endl << "2.По возрастанию" << endl << "3.По убыванию" << endl << "-------------------------" << endl;
    int c;
    cin >> c;
    cout << "-------------------------" << endl;
    if (c == 1) { ran(a, n); }
    if (c == 2) { increase(a, n); }
    if (c == 3) { decrease(a, n); }
    coutc(a, n);
    int K;
    cout << "Введите, на сколько элементов Вы хотите сдвинуть массив" << endl;
    cin >> K;
    shift(a, n, K);

    coutc(a, n);

    delete[] a;

}