#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void cinout(int**& arr, int n)
{
    srand(time(0));
   


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}
void second(int**& arr, int n) {
    int min_abs = abs(arr[0][n - 1]);
    for (int i = 1; i < n; i++) {
        int j = n - i - 1;
        if (abs(arr[i][j]) < min_abs)
            min_abs = abs(arr[i][j]);
    }
    cout << "Minimum absolute value of elements in secondary diagonal: " << min_abs << endl;
    
    }

    void mon(int**& arr, int n) {
        for (int j = 0; j < n; j++) {
            bool increasing = true;
            bool decreasing = true;
            for (int i = 1; i < n; i++) {
                if (arr[i][j] > arr[i - 1][j])
                    decreasing = false;
                if (arr[i][j] < arr[i - 1][j])
                    increasing = false;
            }
            if (increasing || decreasing)
                cout << "Column " << j + 1 << " has a monotonic sequence.\n";
        }

    }


int main()
{
    int n;
    cout << "Enter matrix size: ";
    cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    cinout(arr, n);
        second(arr, n);
        mon(arr, n);
   
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}