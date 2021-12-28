#include <iostream> 
 
int main() { 
 double R; 
 std::cin >> R; 
 long long int count1 = 0; 
 for (int x = 0; x <= 2 * R; ++x) { 
 for (int y = 0; y <= 2 * R; ++y) { 
 if (((x - R) * (x - R) + (y - R) * (y - R)) <= R * R) 
 count1++; 
 } 
 } 
 std::cout << "Number of dots: " << count1 << '\n'; 
 return 0; 
}
