#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

int main()
{
RgbImg img = createRgbImg(100, 700);
for (size_t row = 0; row < 100;++row)
	for (size_t col = 0; col < 100; ++col)
	{
		img.pixels[row][col].Blue = 0;
		img.pixels[row][col].Green = 0;
		img.pixels[row][col].Red = 255;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 100; col < 200; ++col)
	{
		img.pixels[row][col].Blue = 0;
		img.pixels[row][col].Green = 127;
		img.pixels[row][col].Red = 255;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 200; col < 300; ++col)
	{
		img.pixels[row][col].Blue = 0;
		img.pixels[row][col].Green = 255;
		img.pixels[row][col].Red = 255;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 300; col < 400; ++col)
	{
		img.pixels[row][col].Blue = 0;
		img.pixels[row][col].Green = 255;
		img.pixels[row][col].Red = 0;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 400; col < 500; ++col)
	{
		img.pixels[row][col].Blue = 255;
		img.pixels[row][col].Green = 191;
		img.pixels[row][col].Red = 0;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 500; col < 600; ++col)
	{
		img.pixels[row][col].Blue = 255;
		img.pixels[row][col].Green = 0;
		img.pixels[row][col].Red = 0;
	}
for (size_t row = 0; row < 100;++row)
	for (size_t col = 600; col < 700; ++col)
	{
		img.pixels[row][col].Blue = 130;
		img.pixels[row][col].Green = 0;
		img.pixels[row][col].Red = 75;
	}
writeRgbImg("Rainbow.bmp", img);
deleteRgbImg(img);
return 0;
	}
