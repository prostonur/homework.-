#include <iostream>


int main()
{
    std::cout << "Enter Height of rhomb: ";
    int num, i;
    std::cin >> num;
    std::cout << "Enter quantity of rhombs: ";
    int quan;
    std::cin >> quan;

    for (i = 1; i <= num; ++i)
    {
        for (int counter = 0; counter < quan + 1; ++counter)
        {
            for (int j = 0; j < num - i; j++) std::cout << " ";
            for (int k = 0; k < i * 2 - 1; k++) std::cout << "*";
            for (int j = 0; j < num - i; j++) std::cout << " ";
        }
        std::cout << std::endl;

    }

    i -= 2;
    for (; i >= 0; --i)
    {
        for (int counter = 0; counter < quan + 1; ++counter)
        {
            for (int j = 0; j < num - i; ++j) std::cout << " ";
            for (int k = 0; k < i * 2 - 1; ++k) std::cout << "*";
            for (int j = 0; j < num - i; ++j) std::cout << " ";
        }
        std::cout << std::endl;

    }
    return 0;
}
