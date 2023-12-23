#include <iostream> 
#include <math.h>

//return 
using namespace std;
//int foo(double n)
//{
//    
//    int a, b, c, d;
//    setlocale(LC_ALL, "Rus");
//    a = int(n * 10) % 10;
//    b = int(n * 100) % 10;
//    c = int(n * 1000) % 10;
//    d = int(n * 10000) % 10;
//    if (int(a + b) == int(c + d))
//        cout << "Да" << endl;
//    else
//        cout << "Нет" << endl;
//    return n;
//}
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    double  q;
//  cout << " Ввод q=";
//  cin >> q;
//  if (q < 0)
//  {
//      cout << "Ошибка";
//      return 0;
//  }
//  cout << foo(q);
//}


// указатель

//int foo(double *n)
//{
//
//    int a, b, c, d;
//    setlocale(LC_ALL, "Rus");
//    a = int(*n * 10) % 10;
//    b = int(*n * 100) % 10;
//    c = int(*n * 1000) % 10;
//    d = int(*n * 10000) % 10;
//    if (int(a + b) == int(c + d))
//        cout << "Да" << endl;
//    else
//        cout << "Нет" << endl;
//    return *n;
//}
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    double  q;
//    cout << " Ввод q=";
//    cin >> q;
//    if (q < 0)
//    {
//        cout << "Ошибка";
//        return 0;
//    }
//    cout << foo(&q);
//}


//ссылка


int foo(double &n)
{
    
    int a, b, c, d;
    setlocale(LC_ALL, "Rus");
    a = int(n * 10) % 10;
    b = int(n * 100) % 10;
    c = int(n * 1000) % 10;
    d = int(n * 10000) % 10;
    if (int(a + b) == int(c + d))
        cout << "Да" << endl;
    else
        cout << "Нет" << endl;
    return n;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    double  q;
  cout << " Ввод q=";
  cin >> q;
  if (q < 0)
  {
      cout << "Ошибка";
      return 0;
  }
  cout << foo(q);
}


