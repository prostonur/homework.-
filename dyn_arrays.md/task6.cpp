#include <iostream>
#include <ctime>
#include <iomanip>

int size_num(int num) {
    int size = 0;
    while (num) {
        size++;
        num /= 10;
    }
    return size;
}

int main() {
    srand(time(nullptr));
    int n, m;
    std::cout << "enter n, m: ";
    std::cin >> n >> m;
    int max = INT_MIN;
    int **arr = new int*[n];
    for (int i = 0; i < n; ++i)
        arr[i] = new int[m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 100000;
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            std::cout << std::setw(size_num(max)) << std::right << arr[i][j] << ' ';
        std::cout << '\n';
    }
    for (int i = 0; i < n; ++i)
        delete[] arr[i];
    delete[] arr;
}
