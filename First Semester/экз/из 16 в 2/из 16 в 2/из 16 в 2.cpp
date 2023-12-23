#include <iostream>
#include <bitset>
#include <string>

using namespace std;
int main()
{
    string hex_str = "FF"; // 16-ное число
    unsigned int hex_num = stoi(hex_str, nullptr, 16); // переводим в 10-ую систему
    bitset<8> bin_num(hex_num); // преобразуем в двоичный формат
    cout << "16-ое число: " << hex_str << endl;
    cout << "2-ое число: " << bin_num << endl;
    return 0;
}