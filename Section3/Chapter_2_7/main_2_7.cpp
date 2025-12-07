#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	// c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;
	cout << (int)3.14 << endl;

	// cpp-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;
	cout << int(3.14) << endl;
	cout << unsigned int(3.14) << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	cout << endl;

	char c5(65);
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;
	
	cout << endl;

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	
	/*cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	
	cout << c1 << " " << static_cast<int>(c1) << endl;*/
	
	cout << endl;

	cout << "This is first line \nsecond line\n";
	cout << "This is first line " << endl;
	cout << "second line" << endl;
	cout << "Flush" << std::flush;
	cout << int('\n') << endl;

	cout << endl;

	cout << "This is first line \tsecond line\t";
	cout << int('\t') << endl;

	wchar_t c;
	char16_t c16;
	char32_t c32;

	return 0;
}