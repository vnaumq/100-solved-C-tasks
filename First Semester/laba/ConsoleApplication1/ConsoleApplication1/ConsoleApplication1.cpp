#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n = 1; int k;
    cin >> k;
    stringstream ss;
    string s;
    while (1)
    {
        ss << n;
        s = ss.str();
        if (s.length() >= k)
        {
            cout << s << "\n" << s[k - 1] << "\n" << s.length();
            break;
        }
        n++;
    }
    system("pause>0");
    return 0;
}