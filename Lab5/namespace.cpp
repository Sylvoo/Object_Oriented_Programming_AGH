#include <iostream>

#include <iostream>

namespace jz {
namespace jpo {
    double abs(double number) {
        return (number > 0) ? number : -number;
    }
} // namespace jpo
} // namespace jz

int main() {
    double d1 = 13.2;
    double d2 = -14.321;

    std::cout << "Using std::abs()" << std::endl;
    std::cout << "abs(" << d1 << ") == " << std::abs(d1) << std::endl;
    std::cout << "abs(" << d2 << ") == " << std::abs(d2) << std::endl;

    std::cout << "Using jz::jpo::abs()" << std::endl;
    std::cout << "abs(" << d1 << ") == " << jz::jpo::abs(d1) << std::endl;
    std::cout << "abs(" << d2 << ") == " << jz::jpo::abs(d2) << std::endl;

    return 0;
}