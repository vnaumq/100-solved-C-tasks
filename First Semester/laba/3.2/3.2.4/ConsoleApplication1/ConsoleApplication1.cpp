#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUS");
    const int ROW = 10; //строки
    const int COL = 3; //колонки

    int arr[ROW][COL];
    int a = 0;
    int x=-9999;
    int z=0;
    int v=0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 10-5;
        }
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (!(arr[i][j]%2==0)||(arr[i][j]==0))
            {
                a++;
            }
            if (a == COL)
            {
                for (int j = 0; j < COL; j++)
                {
                    z = z + arr[i][j];
                    
                }
                z = abs(z);
                if (z > x)
                {
                    x = z;
                    z = 0;
                    v = i;

                }
                
            }
        }
        a = 0;   
    }
    if (!(x == -9999))
    {
        cout << " строка с наибольшей суммой чисел по модулю - " << (v ) << endl;
        cout << " максимальная сумма по модулю =" << x << endl;
        
    }
    else
    {
        cout << "в матрице нету строк со всеми нечётными числами" << endl;
    }
    cout << "------------------------------------------" << endl;
   
    int b[COL][ROW];
        for (int i = 0; i <COL ; i++)
        {
            for (int j = 0; j < ROW; j++)
            {
                b[j][i] = arr[i][j];
            }
        }
        for (int i = 0; i < COL; i++)
        {
            for (int j = 0; j < ROW; j++)
            {
                cout << b[j][i] << "\t";
            }
            cout << endl;
        }
    }






