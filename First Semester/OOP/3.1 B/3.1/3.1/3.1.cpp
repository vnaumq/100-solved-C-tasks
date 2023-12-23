#include <iostream>
#include <string>
using namespace std;
string remove(const string s)
{
    char max_char = '\0';
    int max_count = 0;
    char curr_char = '\0';
    int curr_count = 0;
    string result;
    for (char c : s) {
        if (c == curr_char) {
            curr_count++;
        }
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                max_char = curr_char;
            }
            curr_char = c;
            curr_count = 1;
        }
    }
    if (curr_count > max_count) {
        max_count = curr_count;
        max_char = curr_char;
    }
    for (char c : s) {
        if (c != max_char) {
            result.push_back(c);
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    string output = remove(input);
    cout << "Input: " << input << std::endl;
    cout << "Output: " << output << std::endl;
    return 0;
}
