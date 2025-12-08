#include <iostream>

int main(void)
{
	using namespace std;

	float pi = 3.14f;
	int i = 1234u; // u: unsigned
	long double ld = 3.14l; // l: long double
	long n2 = 5L;
	double d = 6.0e-10;

	// Decimal		: 0 1 2 3 4 5 6 7 8 9 -> 10 11 ...
	// Octal		: 0 1 2 3 4 5 6 7 -> 10 11 ...
	// Hexadecimal	: 0 1 2 3 4 5 6 7 8 9 A B C D E F -> 10 11 ...

	int D = 12; // decimal
	int O = 014; // octal : 0을 앞에 표기
	int H = 0xC;

	// 모두 12를 출력
	cout << D << endl;
	cout << O << endl;
	cout << H << endl;

	// 0011 1010 1111 1000
	// 3A7F

	// C++ 14
	// binary literal
	int B = 0b1010;
	cout << B << endl;

	int temp = 0b1011'1111'1010;
	cout << temp << endl;

	int num_items = 123;
	int price = num_items * 10; // magic number

	const int price_per_item = 10;
	price = num_items * price_per_item;

	return 0;
}