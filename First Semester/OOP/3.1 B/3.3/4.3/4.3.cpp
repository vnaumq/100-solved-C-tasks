#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool has_duplicates(const string& word) {
    vector<bool> found(26, false);
    for (char c : word) {
        if (found[c - 'a']) {
            return true;
        }
        found[c - 'a'] = true;
    }
    return false;
}

string no_duplicates(const string& sentence) {
    string result;
    string word;
    for (char c : sentence) {
        if (isspace(c) || ispunct(c)) {
            if (!word.empty() && !has_duplicates(word)) {
                result += word + " ";
            }
            word.clear();
        }
        else {
            word += tolower(c);
        }
    }
    if (!word.empty() && !has_duplicates(word)) {
        result += word + " ";
    }
    return result;
}

int main() {
    string sentence = "It goes without saying, books are our teachers and friends. They teach us to be kind, clever, polite, hardworking, friendly.";
    string no_dupes = no_duplicates(sentence);
    cout << "Original sentence: " << sentence << endl;
    cout << "Words without duplicates: " << no_dupes << endl;
    return 0;
}
