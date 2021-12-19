#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    auto* factor = new double[n];
    std::cout << "Enter factors: ";
    for (int i = 0; i < n; ++i)
        std::cin >> factor[i];
    double sum = factor[0];
    int x;
    std::cout << "enter x: ";
    std::cin >> x;
    int temp_x = x;
    for (int i = 1; i <= n - 1; ++i) {
        sum += factor[i] * temp_x;
        temp_x *= temp_x;
    }
   
}
