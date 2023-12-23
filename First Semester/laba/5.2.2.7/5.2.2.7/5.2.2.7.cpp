#include <iostream>
using namespace std;
void random(int *arr, int nrow, int ncol
)
{
    srand(time(0));
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            arr[i * ncol + j] = rand() % 10 - 5;

        }

    }
}
void coutc(int* arr, int nrow, int ncol)
{
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << arr[i * ncol + j] << "\t";
        }
        cout << endl;
    }
}
void yk(int *arr,int nrow,int ncol)
{
    int x = 0;
	for (int i=0;i<ncol;i++)
	{
		for (int j=0;j<nrow;j++)
		{
			if (arr[j * ncol + i]%2==0&& !(arr[j * ncol + i]==0))
			{
                x++;
                if (x==nrow)
                {
                    cout <<"Четный столбец - " << i + 1 << endl;
                }
			}

		}
        x = 0;
	}
}
void random(int** arr1, int ROW, int COL)
{
    srand(time(0));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr1[i][j] = rand() % 10 - 5;
        }
    }

}
void coutc(int** arr1, int ROW, int COL)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

}
void yk(int** arr, int nrow, int ncol)
{
    int x = 0;
    for (int j = 0; j < ncol; j++)
    {
        for (int i = 0; i < nrow; i++)
        {
            if (arr[i][j] % 2 == 0 && !(arr[i][j] == 0))
            {
                x++;
                if (x == nrow)
                {
                    cout << "Четный столбец - " << i + 1 << endl;
                }
            }

        }
        x = 0;
    }
}

int main()
{
    setlocale(LC_ALL,"rus");
	int* arr;
    int nrow, ncol;
    cout << "Введите количество строк и столбцов" << endl;
    cin >> nrow >> ncol;
    int y;
    cout <<"Какой способ: "<<endl<<"1.описывая двумерный массив как одномерный, с расчётом смещения элемента массива по линейной формуле;"
        <<endl<<"2.описывая двумерный массив как указатель на массив указателей."<<endl;
    cin >> y;
    if (y == 1) {
        arr = new int[nrow * ncol];
        random(arr, nrow, ncol);
        coutc(arr, nrow, ncol);
        cout << "-------------" << endl;
        yk(arr, nrow, ncol);
        delete[] arr;
    }
    else
    {
        int** arr1 = new int* [nrow];
        for (int i = 0; i < nrow; i++)
        {
            arr1[i] = new int[ncol];
        }
        random(arr1, nrow, ncol);
        coutc(arr1, nrow, ncol);
        cout << "-------------" << endl;
        yk(arr1, nrow, ncol);
        for (int i = 0; i < nrow; i++)
            delete[] arr1[i];
        delete[] arr1;
    }
}

