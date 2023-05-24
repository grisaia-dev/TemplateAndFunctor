#pragma once
#include <ostream>

template<class T>
class Table {
private:
    T** array = nullptr;
    const unsigned int rows;
    const unsigned int cols;
public:
    Table(const int row, const int col) : rows(row), cols(col) {
        this->array = new T*[rows];
        for (unsigned int i=0; i < rows; i++)
            this->array[i] = new T[cols];
    }

    T* operator[](size_t i) { return array[i]; } // Для не константной версии
    const T* operator[](size_t i) const { return array[i]; } // Для константной версии

    const std::ostream& operator<<(std::ostream& os) { return os << array; }

    const int size() const { return rows * cols; }

    ~Table() {
        for(unsigned int i = 0; i < rows; i++)
            delete [] array[i];
        delete [] array;
    }
};