#include <iostream>

using namespace std;

int main(void)
{
	int x = 1;
	int y = -x; // y = -1
	

	int a = 7;
	int b = 4;
	int c = a % b;
	int temp;

	cout << a / b << " " << c << endl;
	cout << float(a) / b << endl;
	cout << a / float(b) << endl;
	cout << float(a) / float(b) << endl;
	cout << typeid(a * 4.1f).name() << endl;
	cout << typeid(a * 4.1).name() << endl;
	cout << a * 4.1 << endl;
	cout << a / 4.1 << endl;
	cout << a + 4.1 << endl;
	cout << a - 4.1 << endl;
	cout << int(a - 4.1) << endl;
	cout << -5 / 2 << endl;
	
	x = 7;
	y = 4;
	int z = x;
	z += y; // z = z + y;
	
	return 0;
}