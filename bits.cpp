#include <iostream>
#include <fstream>


int main(int argc, const char* argv[]) {
	if (argc < 3)
	{
		std::cout << "names of in and out files are undeclared\n";
		return -1;
	}

	std::ifstream in(argv[1], std::ios::binary);
	if (!in.is_open())
	{
		std::cout << "Input file isn't open\n";
		return -2;
	}
	std::ofstream out(argv[2], std::ios::binary);
	if (!out.is_open())
	{
		std::cout << "Output file isn't open\n";
		return -3;
	}
	char c;
	int count = 0;
	while ((c = in.get()) != EOF) {
		count++;
	}
	std::cout << "bites: " << count * 8 « '\n';
}
