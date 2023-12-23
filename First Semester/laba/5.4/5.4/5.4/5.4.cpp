#include <iostream>
#include <cmath>
using namespace std;

const int ROW = 10, COL = 3;
int cincc(int q[ROW][COL]);
int random(int mas[ROW][COL]);
int coutc(int c[ROW][COL]);
int cabs(int l[ROW][COL]);
int ctran(int l[ROW][COL]);
int main()
{
    setlocale(LC_ALL, "RUS");
    int arr[ROW][COL];
    cincc(arr);
    /*random(arr);*/
    coutc(arr);
    cabs(arr);
    ctran(arr);

}
int cincc(int q[ROW][COL])
{
    int a;
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin>>a;
            q[i][j] = a;
        }
    }
    return 0;
}
int random(int mas[ROW][COL])
{
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            mas[i][j] = rand() % 10 - 5;
        }
    }
    return 0;
}
int coutc(int c[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
int cabs(int l[ROW][COL])
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
            if (!(l[i][j] % 2 == 0) || (l[i][j] == 0))
            {
                a++;
            }
            if (a == COL)
            {
                for (int j = 0; j < COL; j++)
                {
                    z = z + l[i][j];

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
    return 0;
}
int ctran(int l[ROW][COL])
{
    int b[COL][ROW];
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            b[j][i] = l[i][j];
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
    return 0;
}