#include <iostream>
#include <string>
using namespace std;

// Функция для перевода символа из шестнадцатеричной системы в десятичную
int hexToDecimal(char hex) {
    if (hex >= '0' && hex <= '9') {
        return hex - '0';
    }
    else if (hex >= 'A' && hex <= 'F') {
        return hex - 'A' + 10;
    }
    else if (hex >= 'a' && hex <= 'f') {
        return hex - 'a' + 10;
    }
    return -1; // Возвращаем -1 в случае недопустимого символа
}

// Функция для перевода целого числа из шестнадцатеричной системы в десятичную
int hexToDecimal(const string& hexNumber) {
    int decimalNumber = 0;
    int power = 1;
    for (int i = hexNumber.length() - 1; i >= 0; --i) {
        int digitValue = hexToDecimal(hexNumber[i]);
        if (digitValue == -1) {
            return -1; // Ошибка: недопустимый символ в числе
        }
        decimalNumber += digitValue * power;
        power *= 16;
    }
    return decimalNumber;
}

// Функция для перевода целого числа из десятичной системы в двоичную
string decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        return "0";
    }
   string binaryNumber;
    while (decimalNumber > 0) {
        binaryNumber = (char)('0' + (decimalNumber % 2)) + binaryNumber;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main() {
    setlocale(LC_ALL, "rus");
   string hexNumber;
   cout << "Введите число в шестнадцатеричной системе: ";
    cin >> hexNumber;

    int decimalNumber = hexToDecimal(hexNumber);
    if (decimalNumber == -1) {
        cout << "Ошибка: недопустимый символ в числе" <<endl;
        return 0;
    }

    string binaryNumber = decimalToBinary(decimalNumber);
    cout << "Число в двоичной системе: " << binaryNumber << endl;

    return 0;
}