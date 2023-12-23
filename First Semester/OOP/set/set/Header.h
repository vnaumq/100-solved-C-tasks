#ifndef SET_H
#define SET_H

#include <iostream>
#include <set>

class CyrillicSet {
private:
    std::set<char> set_;

public:
    CyrillicSet();
    CyrillicSet(const std::set<char>& set);
    CyrillicSet(const CyrillicSet& other);
    CyrillicSet& operator=(const CyrillicSet& other);
    CyrillicSet(CyrillicSet&& other) noexcept;
    CyrillicSet& operator=(CyrillicSet&& other) noexcept;
    ~CyrillicSet();

    void insert(char c);
    void erase(char c);
    CyrillicSet intersection(const CyrillicSet& other) const;
    CyrillicSet difference(const CyrillicSet& other) const;
    CyrillicSet union_(const CyrillicSet& other) const;

    friend std::ostream& operator<<(std::ostream& os, const CyrillicSet& set);
    friend std::istream& operator>>(std::istream& is, CyrillicSet& set);
};

#endif  // SET_H#pragma once
