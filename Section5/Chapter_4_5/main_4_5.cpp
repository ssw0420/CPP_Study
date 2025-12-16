#include <iostream>
#include <typeinfo>
#include <iomanip>

int main(void)
{
	using namespace std;

	int a = 123;
	int b = int(456.7);
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	
	float f = 1.0f;
	double d = f; // numeric promotion

	char c = 'n';
	int i = c; // numeric promotion

	// numeric conversion
	double d2 = 3;
	short s = 2;

	i = 30000;
	c = i;
	cout << static_cast<int>(c) << endl;

	double d3 = 0.123456789;
	float f2 = d3;

	cout << std::setprecision(12) << f2 << endl; // 0.123456791043

	cout << 5u - 10 << endl; // u: unsigned => 4294967291
	cout << 5u - 10u << endl; // 4294967291

	// int, unsigned int, long, unsigned long,
	// long long, unsigned long long, float, double, long double

	//int b = int(456.7); // cpp style -> integer 타입의 인스턴스를 하나 만들어서 넣는 것에 가까움
	//int b = static_cast<int>(4.0); // cpp style
	//int b = (int)456.7; // c style

	return 0;
}