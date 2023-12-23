#include <iostream>
#include <cmath>
using namespace std;
void random(int* a, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
    }
}
void coutc(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void cmin(int* a, int n)
{
    int nomer = 0, min = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < min)
        {
            min = a[i];
            nomer = i;
        }
    int sum = 0;
    for (int i = 0; i < nomer; i++)
    {
        sum += a[i];
    }
    cout << "----------------" << endl;
    cout << sum << endl;
    cout << "----------------" << endl;
}
void cinc(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "введите размерность динамического массива" << endl;
    cin >> n;
    cout << "----------------" << endl;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
  /*  random(a, n);*/
    cinc(a,n);
    coutc(a, n);
    cout << " " << endl;
    cmin(a, n);
}