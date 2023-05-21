#pragma once
#include <ostream>

template<class T>
class Table {
private:
    T** array = nullptr;
    unsigned int rows;
    unsigned int cols;
public:
    Table(int row, int col) : rows(row), cols(col) {
        array = new T*[rows];
        for (unsigned int i=0; i < rows; i++)
            array[i] = new T[cols];
    }

    int* operator[](const int i) const { return array[i]; }

    std::ostream& operator<<(std::ostream& os) { return os << array; }

    const int size() const { return rows * cols; }

    ~Table() {
        for(unsigned int i = 0; i < rows; i++)
            delete [] array[i];
        delete [] array;
    }
};