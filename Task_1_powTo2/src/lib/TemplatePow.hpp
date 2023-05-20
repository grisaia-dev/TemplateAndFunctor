#pragma once
#include <vector>

template <class T>
T pow(T &variable) {
    return variable * variable;
}

template <>
std::vector<int> pow(std::vector<int>& variable);