#include <iostream>


int main() {
    int n;
    std::cout << "Enter height of rhombus: ";
    std::cin >> n;
    int tabs = n - 1;
    for (int i = 1; i <= n; ++i) {
        int outside_tabs = tabs;
        int inside_tabs = (i > 2) ? (2 * i - 3) : (i - 1);
        int star = i;
        while (outside_tabs) {
            std::cout << ' ';
            outside_tabs--;
        }
        std::cout << '*';
       star--;
        while (inside_tabs) {
            std::cout << ' ';
            inside_tabs--;
        }
        if (star)
            std::cout << '*';

        tabs--;
        std::cout << '\n';
    }
    tabs = 1;
    for (int i = n - 1; i >= 1; --i) {
        int outside_tabs = tabs;
        int inside_tabs = (i > 2) ? (2 * i - 3) : (i - 1);
        int star = i;
        while (outside_tabs) {
            std::cout << ' ';
            outside_tabs--;
        }
        std::cout << '*';
        star--;
        while (inside_tabs) {
            std::cout << ' ';
            inside_tabs--;
        }
        if (star)
            std::cout << '*';
        tabs++;
        std::cout << '\n';
    }
}
