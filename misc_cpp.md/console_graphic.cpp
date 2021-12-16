#include <iostream>
#include <cmath>


bool function(int x, int y) {
    return pow((pow(static_cast<double>(x) / 10, 2) + pow(static_cast<double>(y) / 10, 2) - 1), 3)
    - pow(static_cast<double>(x) / 10, 2) * pow(static_cast<double>(y) / 10, 3) <= 0;
}


int main() {
    for (int x = 15; x >= -15; --x) {
         for (int y = 15; y >= -15; --y) {
             if (function(y, x))
                 std::cout << "*";
             else
                 std::cout << " ";
             if (y == 15)
                 std::cout << '\n';
         }
    }
}
