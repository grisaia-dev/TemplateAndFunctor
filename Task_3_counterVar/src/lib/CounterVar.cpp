#include "CounterVar.hpp"

CounterVar::CounterVar() : sum(0), counter(0) {}

void CounterVar::operator()(int x) {
    if (x%3 == 0) {
        this->sum += x;
        this->counter += 1;
    }
}

int CounterVar::get_count() const {
    return counter;
}

int CounterVar::get_sum() const {
    return sum;
}
