#include <iostream>
#include <cmath>
using namespace std;

const int n = 5;
int random(int mas[n]);
int coutc(int c[n]);
int cinc(int l[n]);
int cmin(int h[n]);

int main()
{
    int a[n];
    /*random(a);*/
    cinc(a);
    coutc(a);
    cout << " " << endl;
    cmin(a);
}
int random(int mas[n])
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 10;
    }
    return 0;
}
int coutc(int c[n])
{
    for (int i = 0; i < n; i++)
    {
        cout << c[i];
    }
    return 0;
}
int cmin(int h[n])
{
    int nomer = 0, min = h[0];
    for (int i = 0; i < n; i++)
        if (h[i] < min)
        {
            min = h[i];
            nomer = i;
        }
    int sum = 0;
    for (int i = 0; i < nomer; i++)
    {
        sum += h[i];
    }
    cout << sum;
    return 0;
}
int cinc(int l[n])
{   
    for (int i = 0; i <n; i++)
    {
        cin >> l[i];
    }
    return 0;
}

