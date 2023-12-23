#include <iostream>
#include "set.h"

int main() {
    CyrillicSet set1, set2;
    std::cout << "Enter first Cyrillic set: ";
    std::cin >> set1;
    std::cout << "Enter second Cyrillic set: ";
    std::cin >> set2;

    CyrillicSet union_set = set1.union_(set2);
    CyrillicSet intersection_set = set1.intersection(set2);
    CyrillicSet difference_set = set1.difference(set2);

    std::cout << "Set 1: " << set1 << std::endl;
    std::cout << "Set 2: " << set2 << std::endl;
    std::cout << "Union: " << union_set << std::endl;
    std::cout << "Intersection: " << intersection_set << std::endl;
    std::cout << "Difference (Set 1 - Set 2): " << difference_set << std::endl;

    CyrillicSet set3;
    set3.insert('м');
    set3.insert('а');
    set3.insert('м');
    std::cout << "Set 3: " << set3 << std::endl;
    set3.erase('м');
    std::cout << "Set 3 after erasing 'м': " << set3 << std::endl;

    return 0;
}