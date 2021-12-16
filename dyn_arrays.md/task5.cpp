#include <iostream>
int main() {
    int n, m;
    std::cout << "enter n, m: ";
    std::cin >> n >> m;
    int **arr = new int*[n];
    for (int i = 0; i < n; ++i)
        arr[i] = new int[m];
    int directions = 1;
    int num = 1;
    int right = m - 1;
    int low = n - 1;
    int left = 0;
    int up = 1;
    int i = 0;
    int j = 0;
    while (true) {
        if (directions == 1 and j < right) {
            arr[i][j] = num;
            num++;
            j++;
        } else if (directions == 1 and j == right) {
            arr[i][j] = num;
            num++;
            i++;
            right--;
            directions++;
        } else if (directions == 2 and i < low) {
            arr[i][j] = num;
            num++;
            i++;
        } else if (directions == 2 and i == low) {
            arr[i][j] = num;
            num++;
            j--;
            low--;
            directions++;
        } else if (directions == 3 and j > left) {
            arr[i][j] = num;
            num++;
            j--;
        } else if (directions == 3 and j == left) {
            arr[i][j] = num;
            num++;
            i--;
            directions++;
            left++;
        } else if (directions == 4 and i > up) {
            arr[i][j] = num;
            num++;
            i--;
        } else if (directions == 4 and i == up) {
            arr[i][j] = num;
            num++;
            j++;
            up++;
            directions = 1;
        }
        if (num == n * m) {
            arr[i][j]= num;
            break;
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < m; ++l)
            std::cout << arr[k][l] << ' ';
        std::cout << '\n';
    }
    for (int z = 0; z < n; ++z)
        delete[] arr[z];
    delete[] arr;
}
