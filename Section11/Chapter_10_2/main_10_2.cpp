#include <iostream>
#include "Monster.h"

using namespace std;

int main(void)
{
	Monster mon1("Jack", Position2D(0, 0));

	cout << mon1 << endl;
	// while (1) // game loop
	{
		//event
		/*mon1.MoveTo(1, 1);
		cout << mon1 << endl;*/

		mon1.MoveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}
	return 0;
}