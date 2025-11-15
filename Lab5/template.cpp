#include <iostream>

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "greater of 3 and 7 is: " << maximum(3, 7) << std::endl; // uses int
    std::cout << "greater of 2.5 and 1.5 is: " << maximum(2.5, 1.5) << std::endl; // uses double
    std::cout << "greater of 'A' and 'B': " << maximum('A', 'B') << std::endl; // uses char

    return 0;
}