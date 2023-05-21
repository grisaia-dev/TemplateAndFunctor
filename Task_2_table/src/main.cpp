#include <iostream>
#include "lib/Table.hpp"

int main(void) {
    auto test = Table<int>(2, 3);
    test[0][0] = 4;
    test[0][1] = 16;
    test[1][0] = 21;
    test[1][1] = 76;
    std::cout << test[0][0] << " " << test[0][1] << " " << test[1][0] << " " << test[1][1] << std::endl;
    std::cout << "[SIZE ARRAY]: " << test.size() << std::endl;
    return 0;
}