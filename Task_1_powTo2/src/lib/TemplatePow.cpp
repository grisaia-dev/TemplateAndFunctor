#include "TemplatePow.hpp"

template <>
std::vector<int> pow(std::vector<int>& variable) {
    for (auto& a : variable)
        a *= a;
    return variable;
}