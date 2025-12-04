#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	float ff(123456789.0f);

	cout << std::setprecision(16);
	cout << 1.0 / 3.0 << endl;
	

	float f(31.141592f);
	float fff(3.141592f);
	float num(123456789.0f);
	double d(3.141592);
	long double ld(3.141592);

	cout << f << endl;
	cout << fff << endl;
	cout << num << endl;
	cout << d << endl;
	cout << ld << endl;

	cout << "\n";

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << setprecision(17);

	cout << d1 << endl;
	cout << d2 << endl;

	cout << "\n";

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e1 << endl;

	cout << "\n";

	double zero = 0.0;
	double positiveInf = 5.0 / zero;
	double negativeInf = -5.0 / zero;
	double nan = zero / zero; // not a number

	cout << positiveInf << "\t\t" << std::isnan(positiveInf) << endl;
	cout << negativeInf << "\t\t" << std::isnan(negativeInf) << endl;
	cout << nan << "\t" << std::isnan(nan) << endl;
	cout << 3.5 << "\t\t" << std::isnan(3.5) << endl;

	cout << "\n";

	cout << sizeof(float) << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << "\n";

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << "\n";

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	cout << "\n";

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
}