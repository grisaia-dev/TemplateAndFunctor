#include <iostream>
#include "lib/TemplatePow.hpp"

int main(void) {
    int a = 4;
    double b = 3.2;
    std::cout << "[IN]: " << a << " " << b << std::endl;
    a = pow(a);
    b = pow(b);
    std::cout << "[OUT]: " << a << " " << b << std::endl;


    // Вектор с int
    std::cout << "\nVector<int>!" << std::endl;
    std::vector<int> v1{-1, 4, 8};
    std::cout << "[IN]: ";
    for (auto& a : v1)
        std::cout << a << " ";
    std::cout << std::endl;

    pow(v1);

    std::cout << "[OUT]: ";
    for (auto&a : v1)
        std::cout << a << " ";
    std::cout << std::endl;

    // вектор с double
    std::cout << "\nVector<double>!" << std::endl;
    std::vector<double> v2{2.1, 4.2, 3.2};
    std::cout << "[IN]: ";
    for (auto& a : v2)
        std::cout << a << " ";
    std::cout << std::endl;

    pow(v2);

    std::cout << "[OUT]: ";
    for (auto&a : v2)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0;
}