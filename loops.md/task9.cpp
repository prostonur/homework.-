#include <iostream>

//first method
int main() {
    int num;
    std::cout << "enter num: ";
    std::cin >> num;
    int temp_num = num;
    int deg = 1;
    while ((temp_num /= 2) != 0)
        deg <<= 1;
    std::cout << deg << '\n';
    while (deg) {
        std::cout << num / deg;
        num %= deg;
        deg >>= 1;
    }
}
