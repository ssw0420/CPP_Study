#include <iostream>
#include <cmath> // sqrt()

using namespace std;

int main()
{
	double x;

mytryAgain : // label
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
	{
		goto mytryAgain;
	}
	cout << sqrt(x) << endl;


//	goto skip;
//
//	int x = 5;
//
//skip:
//	x += 3;

	return 0;
}