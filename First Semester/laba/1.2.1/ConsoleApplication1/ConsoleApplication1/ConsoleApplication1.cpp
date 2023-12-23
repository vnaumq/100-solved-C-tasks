#include <iostream> 
using namespace std;
int main()
{
    int   n, m, N,
        a, b, c, d;

    cout << " vvod n=";
    cin >> n;

    if ((n < 1000) || (n >= 10000))
    {
        cout << " error";
        return 0;
    }
    d = n % 10;
    c = n / 10 % 10;
    b = n / 100 % 10;
    a = n / 1000;
    cout << a << b << c << d << endl;
    N = int(a == b) + int(a == c) + int(b == c) + int(c == d);
    if (N > 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

}