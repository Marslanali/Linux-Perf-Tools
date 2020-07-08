#include <iostream>

#include "shared/fibonacci.h"

int Fibonacci::fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
