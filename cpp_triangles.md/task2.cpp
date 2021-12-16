#include <iostream>


int main() {
    size_t n;
    std::cout << "Input height of triangle: ";
    std::cin >> n;
    int tabs = 1;
    for (size_t i = 1; i <= 2 * n - 1; i += 2) {
        int temp_tabs = 0;
        while (temp_tabs != n - tabs)
        {
            std::cout << ' ';
            temp_tabs++;
        }
        size_t star = i;
        while (star)
        {
            std::cout << '*';
           star--;
        }
        std::cout << '\n';
        tabs++;
    }
}
