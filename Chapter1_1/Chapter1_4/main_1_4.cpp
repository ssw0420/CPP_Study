#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
	using namespace std;
	int x = 1024;
	double pi = 3.141592;

	std::cout << "I love this lecture!" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;
	std::cout << "abc" << '\t' << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	std::cout << "\a";

	int y;
	cin >> y;

	cout << "Your input is " << y << endl;
	return 0;
}