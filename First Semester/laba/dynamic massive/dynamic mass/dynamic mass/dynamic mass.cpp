#include<iostream>
using namespace std;
void ii(int* a, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
        a[i] = rand() & 10;

}
int main() 
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
    ii(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}