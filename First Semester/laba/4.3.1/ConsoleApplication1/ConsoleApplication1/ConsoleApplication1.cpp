
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str1;
    cout << "Введите четыре предложения: " << endl;
    getline(cin, str1, ';');
    cout << str1;
    //cout << str;
    //string str, word1, word2;
    //cout << "Enter your text: ";
    //getline(cin, str);
    //int i = 0;
    //
    //while (word1.empty())
    //{
    //    if (isalpha(str[i]))
    //        while (i < str.size() && isalpha(str[i]))
    //        {
    //            word1.append(1, str[i]);
    //            i++;
    //        }
    //    else i++;
    //}
    //bool a;
    //while (i < str.size())
    //{
    //    if (isalpha(str[i]))
    //    {
    //        a = true;
    //        word2.erase(0, word2.length());
    //        while (i < str.size() && isalpha(str[i]))
    //        {
    //            word2.append(1, str[i]); 
    //            if (word1.find(str[i]) == -1)
    //                a = false;
    //            i++;
    //        }
    //        if (a)
    //            cout << word2 << endl;
    //    }
    //    else i++;
    //}
    //return 0;
}