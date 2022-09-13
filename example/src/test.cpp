#include "excerpt.h"
#include <vector>

//typedef float fp_t; // floating point type for all the operations
//typedef double fp_t; // floating point type for all the operations

int main() {
    unsigned int p = 3;
    std::vector<float> roots(p - 1);
    std::vector<float> coefficients(p);
    // TODO: fix c++
    auto result = generate_polynomial<float>(p, 1, 1, 1, 10.0, -10.0, 10.0, roots, coefficients);
    std::cout << "Result: " << result << "Roots: ";
    for (auto root: roots) {
        std::cout << root << " ";
    }
    std::cout << "Coefficients: ";
    for (auto coefficient: coefficients) {
        std::cout << coefficient << " ";
    }
}