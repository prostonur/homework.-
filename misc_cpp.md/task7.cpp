#include <iostream>
#include <cmath>
#include <set>


int main() {
    int r;
    std::set<std::pair<int, int>> st;
    std::cout << "enter r: ";
    try {
        std::cin >> r;
        if (r > pow(10, 6))
            throw std::out_of_range("out of range\n");
    } catch (const std::exception& ex) {
        std::cerr << ex.what();
        exit(1);
    }
    int count = 0;
    for (int x = -r; x <= r; ++x)
        for (int y = -r; y <= r; ++y)
            if (pow(x,2) + pow(y, 2) <= pow(r, 2))
                st.emplace(std::make_pair(x,y));
    std::cout << "number of dots: " << st.size() << '\n';
}
