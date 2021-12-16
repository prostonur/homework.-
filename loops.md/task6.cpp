#include <iostream>

int maximum(int max, int x) {
    return max > x ? max : x;
}

int main() {
    int n;
    std::cout << "enter n: ";
    int max = INT_MIN;
    std::cin >> n;
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            max = maximum(max, n);
            count++;
            std::cout << n << ' ';
        } else {
            n *= 3;
            n++;
            max = maximum(max, n);
            count++;
            std::cout << n << ' ';
        }
    }
    std::cout << max << ' ' << count << '\n';
}
