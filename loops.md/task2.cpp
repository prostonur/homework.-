#include <iostream>

int main() {
    int n;
    std::cout << "enter n: ";
    std::cin >> n;
    double sum = 1. ;
    int addendum = 1;
    for (int i = 1; i <= n; ++i) {
        addendum *= 2;
        sum += 1. / addendum;
    }
    std::cout << sum << '\n';
}
