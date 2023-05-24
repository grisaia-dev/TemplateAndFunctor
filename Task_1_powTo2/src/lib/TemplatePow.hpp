#pragma once
#include <vector>

template <class T>
T pow(T &variable) {
    return variable * variable;
}

template <class T>
std::vector<T> pow(std::vector<T>& variable) {
    for (auto& a : variable)
        a *= a;
    return variable;
}