#include <iostream>
#include <forward_list>
#include <vector>
int main() {
    int n;
    std::cin >> n;

    std::forward_list<double> a;
    for (int i = 0; i < 2 * n; i++) {
        double x;
        std::cin >> x;
        a.push_front(x);
    }

    double sum = 0;
    std::forward_list<double>::iterator it1 = a.begin();

    auto it2 = a.begin();
    std::advance(it2, n);
    for (int i = 0; i < n; i++) {
        sum += (*it1) * (*it2);
        std::advance(it1, 1);
        std::advance(it2, 1);
    }

    std::cout << sum << std::endl;

    return 0;
}
