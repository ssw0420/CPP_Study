#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//cout.setf(std::ios::showpos); // '+'
	//cout << 108 << endl; // +108
	//cout << 109 << endl; // +109

	//cout.unsetf(std::ios::showpos);
	//cout << 109 << endl; // 109

	//cout.setf(std::ios::hex);
	//cout << 108 << endl; // 108

	//cout.unsetf(std::ios::dec);
	//cout << 108 << endl; // 6c

	//cout.setf(std::ios::hex, std::ios::basefield);
	//cout << 108 << endl; // 6c

	//cout << std::hex;
	//cout << 108 << endl; // 6c

	//cout << std::dec;
	//cout << 109 << endl; // 109

	//cout.setf(std::ios::uppercase);
	//cout << std::hex;
	//cout << 108 << endl; // 6C

	//cout << std::boolalpha;
	//cout << true << " " << false << endl; // true false

	//cout << std::defaultfloat;
	//cout << std::setprecision(3) << 123.456 << endl; // 123
	//cout << std::setprecision(4) << 123.456 << endl; // 123.5
	//cout << std::setprecision(5) << 123.456 << endl; // 123.46
	//cout << std::setprecision(6) << 123.456 << endl; // 123.456
	//cout << std::setprecision(7) << 123.456 << endl; // 123.456

	//cout << endl;

	//cout << std::fixed;
	//cout << std::setprecision(1) << 123.456 << endl; // 123.5
	//cout << std::setprecision(2) << 123.456 << endl; // 123.46
	//cout << std::setprecision(3) << 123.456 << endl; // 123.456
	//cout << std::setprecision(4) << 123.456 << endl; // 123.4560
	//cout << std::setprecision(5) << 123.456 << endl; // 123.45600
	//cout << std::setprecision(6) << 123.456 << endl; // 123.456000
	//cout << std::setprecision(7) << 123.456 << endl; // 123.4560000

	//cout << endl;

	//cout << std::scientific;
	//cout << std::setprecision(1) << 123.456 << endl; // 1.2e+02
	//cout << std::setprecision(2) << 123.456 << endl; // 1.23e+02
	//cout << std::setprecision(3) << 123.456 << endl; // 1.235e+02
	//cout << std::setprecision(4) << 123.456 << endl; // 1.2346e+02
	//cout << std::setprecision(5) << 123.456 << endl; // 1.23456e+02
	//cout << std::setprecision(6) << 123.456 << endl; // 1.234560e+02
	//cout << std::setprecision(7) << 123.456 << endl; // 1.2345600e+02

	//cout << std::showpoint;
	//cout << std::setprecision(3) << 123.456 << endl; // 123.


	cout << -12345 << endl; // -12345
	cout << std::setw(10) << -12345 << endl; //     -12345
	cout << std::setw(10) << std::left << -12345 << endl; // -12345
	cout << std::setw(10) << std::right << -12345 << endl; //     -12345
	cout << std::setw(10) << std::internal << -12345 << endl; // -    12345


	cout << -12345 << endl; // -12345
	cout.fill('*');
	cout << std::setw(10) << -12345 << endl; // -****12345
	cout << std::setw(10) << std::left << -12345 << endl; // -12345****
	cout << std::setw(10) << std::right << -12345 << endl; // ****-12345
	cout << std::setw(10) << std::internal << -12345 << endl; // -****12345


	return 0;
}