#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

//функция для преобразования строки
string transform(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
        {
            result += 'z';
            result += '!';
    
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

//функция для получения всех согласных в алфавитном порядке
string getConsonants(string str)
{
    string consonants = "";
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (isalpha(c))
        {
            char lc = tolower(c); //приводим к нижнему регистру
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u' && lc!='y' )
            {
                consonants += lc;
            }
        }
    }
    sort(&consonants[0], &consonants[0] + consonants.length());
    return consonants;
}

int main()
{
    char* str = new char[1000];
    cout << "Enter the string: ";
    cin.getline(str, 1000);
    string transformedString = transform(str);
    cout << "Transformed string: " << transformedString << endl;
    string consonants = getConsonants(transformedString);
    cout << "Consonants in alphabetical order: " << consonants << endl;
    delete[]str;
    return 0;
}