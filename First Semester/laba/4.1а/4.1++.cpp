#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <set>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    const int MAX = 40;
    char  str1[MAX], str2[MAX];
    unsigned int   i, k = 0;

    cout << "Введите строку  ";
    cin.getline(str1, MAX);

    for (i = 0; str1[i]; i++)
    {
        if (str1[i] == 'z' || str1[i] == 'Z') {
            str2[k] = str1[i];
            k++;
            str2[k] = '!';
            k++;
        }
        else   str2[k++] = str1[i];
    }
    str2[k] = '\0';
    cout << " Вывод " << str2 << endl;


    i = 0;

    for (k = 0; str2[k]; k++) {
        for (int i = 0; i < strlen(str2) - 1; i++)
            for (int k = strlen(str2) - 1; k > i; k--)
                if (str2[k] < str2[k - 1])
                    swap(str2[k], str2[k - 1]);
        if (!(str2[k] == 'a' || str2[k] == 'e' || str2[k] == 'i' || str2[k] == 'u' || str2[k] == 'o' || str2[k] == 'y' || str2[k] == '!')) {
            str1[i] = str2[k];
            i++;
        }
    }

    str1[i] = '\0';
    cout << " Вывод " << str1 << endl;



    return 0;
}