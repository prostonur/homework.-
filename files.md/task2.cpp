#include <iostream> 
#include <fstream> 
#include <iomanip> 
 
int file2hex() { 
 setlocale(LC_ALL, "rus"); 
 const char * path_in = "in.txt"; 
 const char * path_out = "out.txt"; 
 std::ifstream in(path_in,std::ios::binary); 
 if (!in.is_open()) 
 { 
 std::cout « "Input file open error \n"; 
 return -1; 
 } 
 else { 
 std::cout « "Input file successfully opened\n"; 
 } 
 std::ofstream out(path_out,std::ios::binary); 
 if (!out.is_open()) 
 { 
 std::cout « "Output file open error \n"; 
 return 1; 
 } 
 else { 
 std::cout « "Output file successfully opened\n"; 
 } 
 unsigned char c; 
 std::string str_output = ""; 
 int counter = 0, global_counter = 0; 
 while ((c = in.get()) != (unsigned char)EOF) 
 { 
 if (counter == 0) 
 out « std::setfill('0') « std::setw(10) « std::hex « 16 * global_counter « ": "; 
 
 
 if (c >= 32) 
 { 
 str_output += c; 
 out « std::setfill('0') « std::setw(2) « std::hex « (unsigned int)c « " "; 
 } 
 else if (c <= 13) 
 { 
 out « " . "; 
 } 
 counter++; 
 
 if (counter == 8) 
 out « " | "; 
 else if (counter == 16) { 
 out « " " + str_output « std::endl; 
 counter = 0; 
 str_output = ""; 
 global_counter++; 
 } 
 } 
 if (in.peek() == EOF) { 
 while (counter < 16) 
 { 
 out « " "; 
 if (counter == 7) 
 out « " | "; 
 
 counter++; 
 } 
 out « " " + str_output « std::endl; 
 } 
 in.close(); 
 out.close(); 
 std::cout « "Files are closed successfully Mur <3\n"; 
 return 0; 
} 
 
int main() { 
 file2hex(); 
 return 0; 
}
