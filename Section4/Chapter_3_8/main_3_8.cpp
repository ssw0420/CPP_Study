#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// << left shift
	// >> right shift
	// ~ NOT
	// & AND
	// | OR
	// ^ XOR
	// cin, cout에서 사용되는 <<, >>는 overloading된 것으로 bitwise operator는 아님

	// bitset: 2진수로 자동으로 바꾸어 출력해주는 라이브러리
	// bitwise operator의 경우 unsigned를 사용하는 것이 일반적임 (signed는 복잡하기 때문)

	unsigned int a = 1;
	cout << std::bitset<4>(a) << endl; // std::bitset<number of bits>(initial value) => 0001

	a = 3;
	cout << std::bitset<4>(a) << endl;// 0011
	unsigned int b = a << 1; // left shift => a = 3, b = 6
	cout << std::bitset<4>(b) << " " << b << endl;  // 0110 6

	b = a << 2; // a = 3, b = 12
	cout << std::bitset<4>(b) << " " << b << endl; // 1100 12

	a = 3;
	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl; // 00000110 6
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl; // 00001100 12
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl; // 00011000 24
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl; // 00110000 48

	a = 1024;
	cout << std::bitset<16>(a) << endl; // 0000010000000000

	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl; // 0000001000000000 512
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl; // 0000000100000000 256
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl; // 0000000010000000 128
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl; // 0000000001000000 64

	cout << endl;

	a = 1024;
	cout << std::bitset<16>(a) << " " << a << endl; // 0000010000000000 1024
	// ! = Logical Not, ~ : Bitwise Not
	cout << std::bitset<16>(~a) << " " << (~a) << endl; // 1111101111111111 4294966271

	cout << endl;

	// 2진수 표현 방법 : 앞에 0b를 붙여줌.
	a = 0b1100; // 12
	b = 0b0110; // 6

	// 1 1 0 0
	// 0 1 1 0

	cout << a << " " << b << endl; // 12 6
	cout << std::bitset<4>(a & b) << endl; // bitwise AND => 0100
	cout << std::bitset<4>(a | b) << endl; // bitwise OR => 1110
	cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR => 1010

	cout << endl;
	cout << (5 | 12) << endl; // 13
	cout << (5 & 12) << endl; // 4
	cout << (5 ^ 12) << endl; // 9

	a &= b; // a = a & b
	a <<= 1; // a = a << 1
	a >>= 1; // a = a >> 1

	return 0;
}