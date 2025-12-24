#include <iostream>

using namespace std;

int main()
{
	cout << "While-loop TEST" << endl;
	int count = 0;
	
	while (1)
	{
		cout << count << endl;
		count++;

		if (count == 10) break;
	}

	cout << "count: " << count << endl;


	/*unsigned int ucount = 10;
	while (ucount >= 0)
	{
		if (ucount == 0) cout << "zero" << endl;
		else cout << ucount << " " << endl;

		ucount--;
	}*/

	int countNum = 1;
	while (countNum < 100)
	{
		if (countNum % 5 == 0) cout << "Hello " << countNum << endl;
		countNum++;
	}

	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}

	return 0;
}