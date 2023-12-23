#include <iostream>
#include <cmath>
using namespace std;

void cincc(int**& arr, int ROW, int COL)
{
    int a;
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> a;
            arr[i][j] = a;
        }
    }
   
}
void random(int**& arr, int ROW, int COL)
{
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 10 - 5;
        }
    }
    
}
void coutc(int**& arr, int ROW, int COL)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
   
}
void cabs(int**& arr, int ROW, int COL)
{
    int a = 0;
    int x = -9999;
    int z = 0;
    int v = 0;


    cout << "------------------------------------------" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (!(arr[i][j] % 2 == 0) || (arr[i][j] == 0))
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
        cout << " строка с наибольшей суммой нечётных чисел по модулю - " << (v) << endl;
        cout << " максимальная сумма по модулю =" << x << endl;

    }
    else
    {
        cout << "в матрице нету строк со всеми нечётными числами" << endl;
    }
    cout << "------------------------------------------" << endl;
   
}
void ctran(int**& arr,int ROW , int COL)
{
    int** b = new int* [COL];
    for (int i = 0; i < COL; i++)
    {
        b[i] = new int[ROW];
    }
    
    for (int i = 0; i < ROW ; i++)
    {
        for (int j = 0; j < COL ; j++)
        {
            b[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
   
}

int main()
{

    int q = 5; 
    int* Q = &q;
    cout << Q << endl;
    setlocale(LC_ALL, "RUS");
    int ROW, COL;
    cout << "Введите число строк" << endl;
    cin >> ROW;
    cout << "Введите число столбцов" << endl;
    cin >> COL;
    int** arr = new int* [ROW];
    for (int i = 0; i < ROW; i++)
    {
        arr[i] = new int[COL];
    }
    
  /*  cincc(arr,ROW,COL);*/
    random(arr,ROW,COL);
    coutc(arr, ROW, COL);
    cabs(arr, ROW, COL);
    ctran(arr, ROW, COL);

}

