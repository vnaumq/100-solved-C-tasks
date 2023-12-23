#include <iostream>
using namespace std;
//return
int func(int x)
 {
    int   n, m, N,
        a, b, c, d,k;


    if ((x < 1000) || (x >= 10000))
    {
        cout << " error";
    }
    d = x % 10;
    c = x / 10 % 10;
    b = x / 100 % 10;
    a = x / 1000;
    N = int(a == b) + int(a == c) + int(b == c) + int(c == d)+ int(a == c)+ int(a == d)+ int(b == d);
    if (N > 0)
        k = 0;
    else
        k = 1;
    return k;
}


//указаетль

int func1(int *x) 
{
    int   n, m, N,
        a, b, c, d, k;


    if ((*x < 1000) || (*x >= 10000))
    {
        cout << " error";
    }
    d = *x % 10;
    c = *x / 10 % 10;
    b = *x / 100 % 10;
    a = *x / 1000;
    N = int(a == b) + int(a == c) + int(b == c) + int(c == d) + int(a == c) + int(a == d) + int(b == d);
    if (N > 0)
        k = 0;
    else
        k = 1;
    return k;
}

//ссылка
int func2(int &x)
{
    int   n, m, N,
        a, b, c, d,k;


    if ((x < 1000) || (x >= 10000))
    {
        cout << " error";
    }
    d = x % 10;
    c = x / 10 % 10;
    b = x / 100 % 10;
    a = x / 1000;
    N = int(a == b) + int(a == c) + int(b == c) + int(c == d)+ int(a == c)+ int(a == d)+ int(b == d);
    if (N > 0)
        k = 0;
    else
        k = 1;
    return k;
}

void fff(int q)
{
    q *= 10; 
    cout << "1: " << q << endl; 

}
int main()
{
    setlocale(LC_ALL, "ru");

    int q = 6;
    fff(q); 
    cout << "2: " << q << endl; 
    int* c;
    c = &q;
    cout << c << endl;
    int a;
    cin>>a;
    cout << "return " << endl;
    cout << func(a)<<endl;
    cout << "указаетль" << endl;
    cout << func1(&a)<<endl;
    cout << "ссылка " << endl;
    cout << func2(a)<<endl;
}