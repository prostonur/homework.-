#include <iostream>
#include <cmath>

int main() {
    double eps;
    double x_min = 0. , x_max = 0. , dx;
    std::cout << "enter eps, x_min, x_max, dx: ";
    std::cin >> eps >> x_min >> x_max >> dx;
    for (double i = x_min; i <= x_max; i += dx) {
        double addendum = i * 1.;
        double temp_x = i;
        double sum = temp_x * 1. ;
        double fact = 1;
        double odd = 1;
        double sign = 1. ;
        while (std::abs(addendum) >= eps) {
            sign *= -1. ;
            odd += 2;
            fact *= (odd * (odd - 1));
            temp_x *= (i * i);
            addendum = sign *  temp_x / fact;
            sum += addendum;
        }
        std::cout << i << '\t' << sum << '\t' << sin(i) << '\n';
    }

}
