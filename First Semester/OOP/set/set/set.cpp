#include "set.h"

CyrillicSet::CyrillicSet() {}

CyrillicSet::CyrillicSet(const std::set<char>& set) : set_(set) {}

CyrillicSet::CyrillicSet(const CyrillicSet& other) : set_(other.set_) {}

CyrillicSet& CyrillicSet::operator=(const CyrillicSet& other) {
    set_ = other.set_;
    return *this;
}

CyrillicSet::CyrillicSet(CyrillicSet&& other) noexcept : set_(std::move(other.set_)) {}

CyrillicSet& CyrillicSet::operator=(CyrillicSet&& other) noexcept {
    set_ = std::move(other.set_);
    return *this;
}

CyrillicSet::~CyrillicSet() {}

void CyrillicSet::insert(char c) {
    set_.insert(c);
}

void CyrillicSet::erase(char c) {
    set_.erase(c);
}

CyrillicSet CyrillicSet::intersection(const CyrillicSet& other) const {
    std::set<char> intersection;
    std::set_intersection(set_.begin(), set_.end(),
        other.set_.begin(), other.set_.end(),
        std::inserter(intersection, intersection.begin()));
    return CyrillicSet(intersection);
}

CyrillicSet CyrillicSet::difference(const CyrillicSet& other) const {
    std::set<char> difference;
    std::set_difference(set_.begin(), set_.end(),
        other.set_.begin(), other.set_.end(),
        std::inserter(difference, difference.begin()));
    return CyrillicSet(difference);
}

CyrillicSet CyrillicSet::union_(const CyrillicSet& other) const {
    std::set<char> union_;
    std::set_union(set_.begin(), set_.end(),
        other.set_.begin(), other.set_.end(),
        std::inserter(union_, union_.begin()));
    return CyrillicSet(union_);
}

std::ostream& operator<<(std::ostream& os, const CyrillicSet& set) {
    for (auto c : set.set_) {
        os << c << " ";
    }
    return os;
}

std::istream& operator>>(std::istream& is, CyrillicSet& set) {
    std::string str;
    is >> str;
    for (auto c : str) {
        set.insert(c);
    }