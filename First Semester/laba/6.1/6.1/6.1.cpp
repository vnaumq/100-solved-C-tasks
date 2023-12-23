#include <iostream>
#include <iomanip>
using namespace std;
const int N=21;
struct Student {
    char FIO[100];
    char name[100];
    char otc[100];
    int year;
    int kurs;
    char pol;
    double usp;
    void zap() {
        
            cin >> FIO >> name >> otc >> year >> kurs >> pol >> usp;
    }
    void vivod() {
      
            cout << FIO << " " << name << " " << otc << setw(5) << year << setw(4) << kurs << setw(3) << pol << setw(5) << usp << endl;
    }
};


void vivod1( Student p[N],int i) {
    
        cout << p[i].FIO << " " << p[i].name << " " << p[i].otc << setw(5) << p[i].year << setw(4) << p[i].kurs << setw(3) << p[i].pol << setw(5) << p[i].usp << endl;
}
void sredn(Student p[N], int n) {
    int k = 0;
    float summ = 0;
    double srednee;
    cout << "Студенты  " << n << "-го курса" << endl;
    for (int i = 0; i < N; i++) {
        if (p[i].kurs == n) {
            summ += p[i].usp;
            k++;
            vivod1(p, i);
           
        }
    }
    srednee = summ / k;
    cout << "--------------------" << endl;
    cout << "Сумма успеваемости : " << summ << endl << "Среднее арифметическое успеваемости : " << srednee << endl;
    cout << "--------------------" << endl;
}
int main() {
    setlocale(LC_ALL, "ru");
    cout << " Введите:  ФИО, возраст, курс, пол, Успеваемость  " << endl;
    Student p[N];
    for (int i = 0; i < N; i++)
    {
        p[i].zap();
    }

    cout << "--------------------" << endl;
    for (int i = 0; i < N; i++)
    {
        p[i].vivod();
    }
    cout << "--------------------" << endl;
    cout << "Введите курс : ";
    int n;
    cin >> n;
    cout << "--------------------" << endl;
    if (n <= 0) {
        cout << "Такого курса не существует" << endl;
    }
    else {
        sredn(p, n);
    }
    return 0;
}