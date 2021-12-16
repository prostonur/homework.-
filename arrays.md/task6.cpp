#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    int* array = new int[n];
    std::cout << "Enter elements of array: ";
    for (int i = 0; i < n; ++i)
        std::cin >> array[i];
    int d;
    bool check = true;
    for (int i = 0; i < n - 1; ++i) {
        if (i == 0)
            d = array[1] - array[0];
        else
            if (array[i + 1] - array[i]  != d)
                check = false;
        if (!check)
            break;
    }
    if (check)
        std::cout << "Difference of arithmetic progression: " << d << '\n';
    else
        std::cout << 0 << '\n';
    delete[] array;
}
