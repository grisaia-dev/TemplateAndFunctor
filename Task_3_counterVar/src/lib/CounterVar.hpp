#pragma once
#include <vector>

class CounterVar {
private:
    int sum;
    int counter;
public:
    CounterVar();
    void operator()(int x);
    int get_sum() const;
    int get_count() const;
};