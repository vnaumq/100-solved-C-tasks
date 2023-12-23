#include <iostream>
#include <list>
#include <forward_list>
#include <algorithm>

using namespace std;

template <typename T>
list<T> createList(const forward_list<T>& l1, const forward_list<T>& l2) {
    list<T> result;
    for (const auto& val : l1) {
        if (find(l2.begin(), l2.end(), val) == l2.end()) {
            result.push_back(val);
        }
    }
    for (const auto& val : l2) {
        if (find(l1.begin(), l1.end(), val) == l1.end()) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    forward_list<char> l1 = {'a', 'b', 'c','l', 'k', 'u' };
    forward_list<char> l2 = {'b', 'd', 'e','m', 'k', 'l' };

    list<char> l = createList(l1, l2);

    for (const auto& val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
