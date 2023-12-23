

#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    using namespace std;
    const int SIZE = 10;
    int mas[SIZE];
    int k = 0;
    int z;
    int q = 0;
    cout << "введите ограничение массива" << endl;
    cin >> z;
  
    for (int i = 0; i < SIZE; i++)
    {
        mas[i] = rand()%z;
    }
    for (int  i = 0; i < SIZE; i++)
    {
        cout << mas[i] << endl;
    }

    cout << "------------" << endl;
    for (int i = 1; i < SIZE; i*=2)
    {
       cout << mas[i] << endl;
    }
   
        

}