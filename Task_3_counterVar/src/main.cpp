#include <iostream>
#include "lib/CounterVar.hpp"

int main(void) {
    CounterVar cv;
    const int my_list[] = {4, 1, 3, 6, 25, 54};
    cv = std::for_each(my_list, my_list+sizeof(my_list)/sizeof(my_list[0]), cv);

    std::cout << "[IN]: ";
    for (auto& a : my_list) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "[OUT]: " << "get_sum() = " << cv.get_sum() << std::endl;
    std::cout << "[OUT]: " << "get_counter() = " << cv.get_count() << std::endl;
    return 0;
}