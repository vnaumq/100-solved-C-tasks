#include "MyClass.h"

// реализация конструкторов и деструктора
MyClass::MyClass() {}
MyClass::MyClass(const std::set<char>& mySet) : m_set(mySet) {}
MyClass::MyClass(const MyClass& other) : m_set(other.m_set) {}
MyClass::~MyClass() {}

// реализация оператора присваивания
MyClass& MyClass::operator=(const MyClass& other) {
    if (this == &other) // проверка на самоприсваивание
        return *this;
    m_set = other.m_set;
    return *this;
}

// реализация методов для изменения множества
void MyClass::add(char elem) {
    m_set.insert(elem);
}

void MyClass::remove(char elem) {
    m_set.erase(elem);
}

// реализация методов для работы с множеством
MyClass MyClass::uni(const MyClass& other) const {
    std::set<char> resSet = m_set;
    for (char elem : other.m_set) {
        resSet.insert(elem);
    }
    return MyClass(resSet);
}

MyClass MyClass::inter(const MyClass& other) const {
    std::set<char> resSet;
    std::set_intersection(m_set.begin(), m_set.end(),
                          other.m_set.begin(), other.m_set.end(),
                          std::inserter(resSet, resSet.begin()));
    return MyClass(resSet);
}

MyClass MyClass::diff(const MyClass& other) const {
    std::set<char> resSet;
    std::set_difference(m_set.begin(), m_set.end(),
                        other.m_set.begin(), other.m_set.end(),
                        std::inserter(resSet, resSet.begin()));
    return MyClass(resSet);
}

// перегрузка операций ввода/вывода
std::ostream& operator<<(std::ostream& out, const MyClass& myClass) {
    for (char elem : myClass.m_set) {
        out << elem << " ";
    }
    return out;
}

std::istream& operator>>(std::istream& in, MyClass& myClass) {
    std::string input;
    in >> input;
    std::set<char> resSet;
    for (char ch : input) {
        if (isalpha(ch) && isupper(ch)) {
            resSet.insert(tolower(ch));
        }
        if (isalpha(ch) && islower(ch)) {
            resSet.insert(ch);
        }
    }
    myClass = MyClass(resSet);
    return in;
}
