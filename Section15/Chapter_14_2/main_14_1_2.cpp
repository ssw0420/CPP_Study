#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// try, catch, throw

	try
	{
		//Something happend
		// throw - 1.0; // error => not int
		// throw "Negative input"; // error => not string

		//throw - 1;
		throw - 1.f;
	}
	catch (int x)
	{
		cout << "Catch Integer" << x << endl;
	}
	catch (float x)
	{
		cout << "Catch double " << x << endl;
	}
	catch (std::string error_message)
	{
		// do something to respond
		cout << error_message << endl; // Negative input
	}

	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");

		cout << std::sqrt(x) << endl;
	}
	catch (std::string error_message)
	{
		// do something to respond
		cout << error_message << endl; // Negative input
	}

	return 0;
}