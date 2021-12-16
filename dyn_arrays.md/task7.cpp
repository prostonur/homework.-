#include <iostream>

void shiftArray(const int arr[], int n, int k) {
    int k_ = k % n;
    int tmp_k_arr[k_];
    int tmp_n_arr[n - k_];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (i < k_)
            tmp_k_arr[i] = arr[i];
        else {
            tmp_n_arr[count] = arr[i];
            count++;
        }
    }
    int count_k = 0;
    for (int i = 0; i < n; ++i) {
        if (count) {
            std::cout << tmp_n_arr[i] << ' ';
            count--;
        } else {
            std::cout << tmp_k_arr[count_k] << ' ';
            count_k++;
        }
    }
}
int main() {
    int n, k;
    std::cout << "enter n, k: ";
    std::cin >> n >> k;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        arr[i] = i;
    shiftArray(arr, n, k);
    delete[] arr;
}
