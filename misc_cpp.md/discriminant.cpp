#include <iostream>
#include<cmath>

int main()
{
    double a, b, c, d, x1, x2;
    std::cout << "Enter a\n";
    std::cin >> a;
    std::cout << "Enter b\n";
    std::cin >> b;
    std::cout<< "Enter c\n";
    std::cin >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        x1 = (-b) + sqrt(d) / (2 * a);
        x2 = (-b) - sqrt(d) / (2 * a);
        std::cout << "x1=" << x1 << std::endl;
        std::cout << "x2=" << x2 << std::endl;
    }
    if (d == 0)
    {
        x1 = (-b) / (2 * a);
    }
    if(d<0)
    {
        std::cout << "No answer" << std::endl;
    }
    
    return 0;
}
