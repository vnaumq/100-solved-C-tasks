#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    unsigned k;
    cout << "k=" << endl;
    cin >> k;


    unsigned long b = 0; //очень большое число типо long, но положительное
    unsigned n = 0;//очень большое число типо int, но положительное
    while (n < k) {
        b += 1;
        unsigned long t = b;
        do
            n++;
        while (t /= 10);//вывод t всегда 0, увеличение n на 2 если b двухзначное

    }

    for (int i = n - k; i > 0; i--)//при переходе на двухзначные числа первая цифра двухзначного будет на 1 больше k например цифра 10 для вывода 1
        b /= 10;//n=11 k=10 таким образом это двухзначное число уменьшается до однозначного
    cout << (b % 10);

}
