#include <iostream> 
#include <algorithm> 
#include <cmath> 
using namespace std;
int main()

{
    double n;
    int  k;
    int count = 0;
    cout << "n =";
    cin >> n;
    cout << "k=";
    cin >> k;
    while (k != 0)
    {
        n = n * 10;
        if ((int)(n) % 10 == 9)
        {
            count++;
        }
        k--;
    }

    cout << count;

}