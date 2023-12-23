#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename rururu, typename rururuu>
 void ran(rururu* a, rururuu b)
{
    srand(time(0));
    for (int i = 0; i < b; i++)
    {
        a[i] = rand() % 10 - 5;
    }
}

void coutc(double* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";

    }
    cout << endl;
    cout << "-------------------";
    cout << endl;
}
void exc(int* a, int n )
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                cout << i << " : " << a[i] << "<->" << a[j] << endl;
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void vybor(int* a, int n)
{
    
    for (int i = 0; i <n; i++)
    {
        int min = i;
        for (int j =i; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
               
            }
        }
        cout << i <<" : " << a[i] << "<->" << a[min] << endl;
        swap(a[i],a[min]);
        
    }
    cout << "--------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


}
void exc(double* a, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                cout << i << " : " << a[i] << "<->" << a[j] << endl;
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void vybor(double *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;

            }
        }
        cout << i << " : " << a[i] << "<->" << a[min] << endl;
        swap(a[i], a[min]);

    }
    cout << "--------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


}
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "введите размерность динамического массива" << endl;
    cin >> n;
    cout << "----------------" << endl;
    double* aa = new double[n]; 
    
  
 
    
    ran(aa, n);
    coutc(aa, n); 
    cout << "1.Выбор" << endl << "2.Обмен" << endl;
    int b;
    cin >> b;
    cout << "----------------" << endl;
    if (b==1)
    {
        vybor(aa, n);
    }
    else
    {
        exc(aa, n);
    }
    
}
