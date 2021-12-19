#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    double r, n;
    double hit = 0, not_hit = 0;
    std::cout << "enter r, n: ";
    std::cin >> r >> n;
    r /= 2;
    int temp_n = n;
    while (temp_n) {
        double x = rand() % int(r);
        double y = rand() % int(r);
        if (x * x + y * y <= r * r)
            hit++;
        else
            not_hit++;
        temp_n--;
        //std::cout << x << ' ' << y << ' ' << hit << ' ' << not_hit << ' ' << n << ' ' << r << '\n';
    }
    if (!not_hit) {
        std::cout << "all the bullets hit the bull's eye!\n";
        exit(1);
    }
    std::cout << 1. * hit / n << ' ' << 3.14 / 4 << '\n';
}
