#include <iostream>
#include <string>
using namespace std;
string decimal(double num) {
    int integer_part = static_cast<int>(num);
    double fractional_part = num - integer_part;
    string hex = "0123456789ABCDEF";
    string result;
    while (integer_part != 0) {
        int remainder = integer_part % 16;
        result = hex[remainder] + result;
        integer_part /= 16;
    }
    result += ".";
    int max_precision = 10;
    while (fractional_part != 0 && max_precision > 0) {
        fractional_part *= 16;
        int digit = static_cast<int>(fractional_part);
        result += hex[digit];
        fractional_part -= digit;
        max_precision--;
    }
    return result;
}

int main() {
    double num;
    cin >> num;
    string hex = decimal(num);
    cout << "Decimal: " << num << std::endl;
    cout << "Hexadecimal: " << hex << std::endl;
    return 0;
}
