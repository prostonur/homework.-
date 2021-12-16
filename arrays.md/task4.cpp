#include <iostream>

int main() {
    int n;
    std::cout << "enter n: ";
    std::cin >> n;
    int* array = new int[n];
    std::cout << "enter elements of array: ";
    for (int i = 0; i < n; ++i)
        std::cin >> array[i];
    std::cout << "collapsing array: ";
    bool check = n == (n / 2) * 2 ? true : false;
    for (int i = 0; i <= (n - 1) / 2; ++i) {
        if (check and i == n / 2)
            std::cout << array[i] << ' ' << array[n - 1 - i];
        else if (!check and i == n / 2)
            std::cout << array[i];
        else
            std::cout << array[i] << ' ' << array[n - 1 - i] << ' ';
    }
    delete[] array;
}
