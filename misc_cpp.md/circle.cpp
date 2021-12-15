#include <iostream>
#include<cmath>

int main()
{
    double br, lr, nr, x, y;
    std::cout << "Enter the radius of the big circle:\n";
    std::cin >> br;
    std::cout << "Enter the ragius of the little circle:\n";
    std::cin >> lr;
    std::cout << "Enter x:\n";
    std::cin >> x;
    std::cout << "Enter y:\n";
    std::cin >> y;

    nr = sqrt(x * x) + (y * y);
    if (lr < nr < br)
    {
        std::cout << "In the circle" << std::endl;
    }
    else
    {
        std::cout << "Out of the circle" << std::endl;
    }
    return 0;

}
