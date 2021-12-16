#include <iostream>


int main() {
    int n;
    std::cout << "Input height of rhombus: ";
    std::cin >> n;
    int tabs = 1;
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        int temp_tabs = 0;
        while (temp_tabs != n - tabs)
        {
            std::cout << ' ';
            temp_tabs++;
        }
        int star = i;
        while (star) {
            std::cout << '*';
            star--;
        }
        std::cout << '\n';
        tabs++;
    }

    tabs = n - 1;
    for (int i = 2 * (n - 1) - 1; i >= 1; i -= 2) {
        int temp_tabs = n - tabs;
        int star = i;
        while (temp_tabs != 0)
        {
            std::cout << ' ';
            temp_tabs--;
        }
        while (star) {
            std::cout << '*';
            star--;
        }
        std::cout << '\n';
        tabs--;
    }
}
