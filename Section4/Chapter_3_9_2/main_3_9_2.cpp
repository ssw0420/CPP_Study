#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl; // 00000000111111110000000000000000
	cout << std::bitset<32>(green_mask) << endl; // 00000000000000001111111100000000
	cout << std::bitset<32>(blue_mask) << endl; // 00000000000000000000000011111111

	cout << endl;
	// golden rod color #DAA520 (218, 165, 32)
	unsigned int pixel_color = 0xDAA520; // = 00 DA A5 20

	cout << std::bitset<32>(pixel_color) << endl; // 00000000110110101010010100100000

	cout << endl;

	// 8bits
	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char blue = pixel_color & blue_mask;

	cout << "red\t" << std::bitset<8>(red) << "\t" << int(red) << endl; // red 11011010 218
	cout << "green\t" << std::bitset<8>(green) << "\t" << int(green) << endl; // green 10100101 165
	cout << "blue\t" << std::bitset<8>(blue) << "\t" << int(blue) << endl; // blue 00100000 32

	return 0;
}