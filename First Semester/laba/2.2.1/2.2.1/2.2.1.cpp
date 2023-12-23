#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    double x, dx = 0.1, x0 = -0.8, xn = 1, h, y, y1 = 0, y2, s = 0, n = 1, e = 10e-6;

    int j = 2;

    for (x0; (x0 < xn); x0 = x0 + dx)
    {
        y = log(1 + x0) - x0;
        y1 = -pow(x0, j) / j;
        y2 = pow(x0, j + 1) / (j + 1);
        while (y2 - y1 < e)
        {
            y1 += y2;
            y2 = pow(x0, j + 1) / (j + 1);
            j++;
        }
        cout << x0 << "   " << y << "   " << y << endl;


    }


}