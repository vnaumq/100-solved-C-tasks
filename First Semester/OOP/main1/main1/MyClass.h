#pragma once
#include <iostream>
#include <string>
#include <set>

class MyClass {
public:
    // ������������ � ����������
    MyClass();
    MyClass(const std::set<char>& mySet);
    MyClass(const MyClass& other);
    ~MyClass();

    // �������� ������������
    MyClass& operator=(const MyClass& other);

    // ������ ��� ��������� ���������
    void add(char elem);
    void remove(char elem);

    // ������ ��� ������ � ����������
    MyClass uni(const MyClass& other) const;
    MyClass inter(const MyClass& other) const;
    MyClass diff(const MyClass& other) const;

    // ���������� �������� �����/������
    friend std::ostream& operator<<(std::ostream& out, const MyClass& myClass);
    friend std::istream& operator>>(std::istream& in, MyClass& myClass);

private:
    std::set<char> m_set;
};
#include <iostream>
#include <string>
#include <set>

class Set {
private:
    std::set<std::string> data;

public:
    Set();
    Set(const std::set<std::string>& other);
    Set(const Set& other);
    ~Set();

    Set& operator=(const Set& other);

    friend std::ostream& operator<<(std::ostream& os, const Set& set);
    friend std::istream& operator>>(std::istream& is, Set& set);

    void add(const std::string& element);
    void remove(const std::string& element);
    Set difference(const Set& other) const;
    Set intersection(const Set& other) const;
    Set union_(const Set& other) const;
};