#include <iostream>  // cin cout
using namespace std;

void main()
{
    int z, a, v, b, q, w, e, r, t, n, m, k, i,p;

    i = 0;
    z = 0;
    a = 0;
    v = 0;
    b = 0;
    q = 0;
    w = 0;
    e = 0;
    r = 0;
    t = 0;

    cout << " vvod n=";
    cin >> n;
    
    k = 2;
    cin >> p;
    m = n;


    while (m > 0)
    {
        int c = m % 10;
        m = m / 10;
        cout << c << endl;

        i += (c == 0);
        z += (c == 1);
        a += (c == 2);
        v += (c == 3);
        b += (c == 4);
        q += (c == 5);
        w += (c == 6);
        e += (c == 7);
        r += (c == 8);
        t += (c == 9);





    }
    if ((p == 0 && k==i) || (p == 1 && k == z) || (p == 2 && k == a) || (p == 3 && k == v) || (p == 4 && k == b) || (p == 5 && k == q) || (p == 6 && k == w) || (p == 7 && k == e) || (p == 8 && k == r) || (p == 9 && k == t)  )
        cout << "YES";
    else
        cout << "NO";



}