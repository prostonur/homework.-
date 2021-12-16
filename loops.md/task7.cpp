#include <iostream>
#include <random>

int main() {
    int r, n;
    int hit = 0, not_hit = 0;
    std::random_device rd;
    std::cout << "enter r, n: ";
    std::cin >> r >> n;
    std::uniform_int_distribution dist(0, r / 2);
    r /= 2;
    while (n) {
        int x = dist(rd);
        int y = dist(rd);
        if (x * x + y * y <= r * r)
            hit++;
        else
            not_hit++;
        n--;
        //std::cout << x << ' ' << y << ' ' << hit << ' ' << not_hit << ' ' << n << '\n';
    }
    if (!not_hit) {
        std::cout << "all the bullets hit the bull's eye!\n";
        exit(1);
    }
    std::cout << 1. * hit / (r * r / 4) << ' ' << 3.14 / 4 << '\n';
}
