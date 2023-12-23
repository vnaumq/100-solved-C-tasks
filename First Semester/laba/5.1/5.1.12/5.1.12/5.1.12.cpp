#include <cmath>
#include <iostream>

using namespace std;

void sum2(int a)
{
    const double PI = acos(-1.0);
   int y= pow(log(a) + sin(PI * a * a), 1 / 4)* sin(a) + a * a + exp(cos(a));
   cout<< y;
}
void fff(int q, int w=3)
{
    cout << pow(q, w) << endl;
}
int main()
{
    setlocale(LC_ALL, "ru");
    int q; 
    cin >> q; 
    fff(q, 2); 
    int x;
    cout << "Введите x" << endl;
    cin >> x;
    sum2(x);
}