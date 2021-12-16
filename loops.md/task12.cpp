#include <iostream>
#include <exception>

int main() {
    int num, sys;
    std::cout << "enter num, sys: ";
    try {
        std::cin >> num >> sys;
        if (!(sys >= 2 and sys <= 16)) {
            throw std::out_of_range("out of range n");
            exit(1);
        }

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << '\n';
    }
    int temp_num = num;
    int deg = 1;
    while ((temp_num /= sys) != 0)
        deg *= sys;
    while (deg) {
        if (num / deg > 9)
            std::cout << static_cast<char>(55 + num / deg);
        else
            std::cout << num / deg;
        num %= deg;
        deg /= sys;
    }
}
