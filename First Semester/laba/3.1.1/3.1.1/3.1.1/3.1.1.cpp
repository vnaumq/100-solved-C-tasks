#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0));
    const int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << " " << endl;
    int min = a[0], nomer = 0, sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < min)
        {
            min = a[i];
            nomer = i;
        }
    for (int i = 0; i < nomer; i++)
    {
        sum += a[i];
    }
    cout << sum;
}