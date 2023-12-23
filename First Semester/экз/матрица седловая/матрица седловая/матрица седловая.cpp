#include<iostream>
using namespace std;
void cinout(int**& a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}
void point(int**& a,int n,int m)
{
    //поиск седловых точек
    for (int i = 0; i < n; i++)
    {
        int min = a[i][0], col = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                col = j;
            }
        }
        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (a[k][col] > a[i][col])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Saddle point: " << a[i][col] << endl;//выводим седловые точки
        }
    }
}
void mon(int**& a, int n, int m)
{
    //поиск монотонно убывающих строк
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = true;
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] < a[i][j + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "String " << i + 1 << " is monotonic decreasing. Elements: ";
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;//выводим монотонно убывающие строки и их элементы
        }
    }
}

int main()
{
    srand(time(0));
    int n, m;
    cin >> n >> m; //вводим размерность матрицы
    int** a=new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cinout(a, n, m);
    point(a, n, m);
    mon(a, n, m);
   
    
    
    return 0;
}