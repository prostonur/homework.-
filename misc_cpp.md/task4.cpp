#include <iostream>
#include <cmath>
#include <exception>

int main() {
    double x, eps;
    std::cout << "enter x, eps: ";
    try {
        std::cin >> x >> eps;
        if (x < - 1 or x > 1)
            throw std::out_of_range("out of range");
    } catch (const std::out_of_range& ex) {
        std::cerr << ex.what() << '\n';
        exit(1);
    }
    int n = 0;
    double addendum = pow(x, n);
    double sum = addendum;
    while (addendum > eps) {
        n++;
        addendum = pow(x, n);
        sum += addendum;
    }
    std::cout << "sum: " << sum << '\n';
    if (sum > 1 / (1 - x))
        std::cout << "sum > 1 / (1 - x)\n";
    else if (sum == 1 / (1 - x))
        std::cout << "sum == 1 / (1 - x)\n";
    else
        std::cout << "sum < 1 / (1 - x)\n";
}
