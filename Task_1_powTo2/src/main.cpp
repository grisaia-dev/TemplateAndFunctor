#include <iostream>
#include "lib/TemplatePow.hpp"

int main(void) {
    int a = 4;
    std::cout << "[IN]: " << a << std::endl;
    a = pow(a);
    std::cout << "[OUT]: " << a << std::endl;

    std::vector<int> b{-1, 4, 8};
    std::cout << "[IN]: ";
    for (auto&a : b)
        std::cout << a << " ";
    std::cout << std::endl;

    pow(b);

    std::cout << "[OUT]: ";
    for (auto&a : b)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0;
}