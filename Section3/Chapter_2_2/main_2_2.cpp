#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main(void)
{
	short		s = 1; // 2 bytes = 2 * 8 bits = 16 bits -> 2^16
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	/*cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;*/

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;
	
	s = 32767;
	s += 1; // 32768 x
	cout << s << endl; // overflow -> output: -32768

	short minS;
	minS = std::numeric_limits<short>::min(); // -32768
	cout << minS << endl;
	minS -= 1; // -32769 x
	cout << minS << endl; // underflow -> 32767

	unsigned int ui = -1;
	cout << ui << endl;

	int di = 22 / 4;
	cout << di << endl; // 5
	cout << 22 / 4 << endl; // 5 - 별도의 변수를 사용하지 않아도 정수끼리의 연산은 정수로 받아들임
	cout << 22.0 / 4 << endl; // 5.5
	cout << (float)22 / 4 << endl; // 5.5
	cout << 22 / (float)4 << endl; // 5.5

	return 0;
}