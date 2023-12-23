// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <ctime>
#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
   /* int arr[4];
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 10;
    arr[3] = 3333;
    cout << arr[0] << endl;*/



    /*int arr[]{1,5,3,44,56};
    int zrr1[4]{};*/


   /* const int size = 5;
    int arr[size]{1,2,5,6,7};
    for (int i = 0; i < size; i++)
    {
        
        cout << arr[i] << endl;
    }*/
    /*const int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        arr[i] = i;
        cout << arr[i] << endl;
    }
*/
    

  /*  int arr[]{ 1,6,7,8,9,5,3 };
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
     */

    //переменные с рандомными неповторяющемися числами
     srand(time(NULL));
    int const SIZE = 10;
    int arr[SIZE];
    bool alreadyThere;
    for (int i = 0; i < SIZE;)
    { 
        alreadyThere = false;
        int newRandomValue = rand() % 20;

        for (int j = 0;  j < i ;  j++)
        {
            if(arr[j]==newRandomValue)
            {
                alreadyThere = true;
                break;
        }

        }
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }
    }
    
    int minValue = arr[0];
    for ( int k = 0; k <SIZE; k++)
    {
        if (arr[k]<minValue)
        {
            minValue = arr[k];
        }

    }
    cout << minValue << endl;




  /*  for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
 
*/













}

