#include "MyClass.h"

int main() {
    MyClass set1, set2;

    std::cout << "Enter set1: ";
    std::cin >> set1;
    std::cout << "Set1: " << set1 << "\n\n";

    std::cout << "Enter set2: ";
    std::cin >> set2;
    std::cout << "Set2: " << set2 << "\n\n";

    // операции над множествами
    std::cout << "Union: " << set1.uni(set2) << "\n\n";
    std::cout << "Intersection: " << set1.inter(set2) << "\n\n";
    std::cout << "Difference set1-set2: " << set1.diff(set2) << "\n\n";
    std::cout << "Difference set2-set1: " << set2.diff(set1) << "\n\n";

    // добавление элемента в множество
    char newElem;
    std::cout << "Enter new element: ";
    std::cin >> newElem;
    std::cout << "Adding " << newElem << " to set1\n";
    set1.add(newElem);
    std::cout << "Set1: " << set1 << "\n\n";

    // удаление элемента из множества
    char elemToRemove;
    std::cout << "Enter element to remove: ";
    std::cin >> elemToRemove;
    std::cout << "Removing " << elemToRemove << " from set2\n";
    set2.remove(elemToRemove);
    std::cout << "Set2: " << set2 << "\n\n";

    return 0;
}