

#include <iostream>
#include <cmath>
using namespace std;

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

void result(int**& arr,int ROW,int COL)
{
    int result = 0;
    for (int i = 0; i < ROW; i++)
    {
        int a = 0;
        int c = 0;

        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                a++;
                c += abs(arr[i][j]);
            }
            if (a == COL && c > result)
            {
                result = c;
            }
        }
    }
    cout << result;
}
void tran(int**& arr, int ROW, int COL)
{
    int** t = new int* [COL];
    for (int i = 0; i < COL; i++)
    {
        t[i] = new int[ROW];
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            t[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << t[i][j] << "\t";

        }
        cout << endl;
    }

}

int main()
{
    int ROW, COL;
    cin >> ROW;
    cin >> COL;
    int** arr = new int* [ROW];
    for (int i = 0; i < ROW; i++)
    {
        arr[i] = new int[COL];
    }
   

    random(arr, ROW, COL);
    coutc(arr, ROW, COL);
    tran(arr, ROW, COL);
    result(arr, ROW, COL);
    
  
}

