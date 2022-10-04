#include "excerpt.h"
#include <vector>

using namespace std;

int main() {
    unsigned p = 2;
    vector<float> roots(p);
    vector<float> coefficients(p + 1);
    auto result = generate_polynomial<float>(p, 0, 2, 0, 10.0/5, -10, 10, roots, coefficients);
    cout << "Result: " << result << endl << "Roots: ";
    for (auto root: roots) {
        cout << root << " ";
    }
    cout << endl << "Coefficients: ";
    for (auto coefficient: coefficients) {
        cout << coefficient << " ";
    }
}