#include <iostream>
using namespace std;
int re(int* n){
    if (*n == 1) return 0;
    else if (*n == 2) return 1;
    else{
        int(*gg)(int n);
        gg = re;
        gg(*n);
        return re((n - 2));
    }
}
int cicle(int n){
    double temp1 = 0;
    double temp2 = 1;
    for (int i = 3; i <= n; i++){
        double temp = temp2;
        temp2 = temp2 + temp1;
        temp1 = temp;
    }
    if (n == 1)
        return temp1;
    else
        return temp2;
}
int main(){
    setlocale(LC_ALL, "rus");
    for (int n = 1; n <= 30; n++){
        cout << "Через цикл: " << cicle(n);
        cout << " | Рекурсия: " << re(&n) << endl;
    }
}