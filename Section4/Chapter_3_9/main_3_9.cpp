#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	//bool item1_flag = false;
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false;
	//// ...
	//
	//// event!
	//item1_flag = true;

	//// die! item2_los
	//item2_flag = false;

	//if (item3_flag == true)
	//{
	//	// event
	//}

	//if (item3_flag == true && item4_flag == false)
	//{
	//	item3_flag = false;
	//	item4_flag = true;
	//}

	const unsigned char option0 = 1 << 0;
	const unsigned char option1 = 1 << 1;
	const unsigned char option2 = 1 << 2;
	const unsigned char option3 = 1 << 3;
	const unsigned char option4 = 1 << 4;
	const unsigned char option5 = 1 << 5;
	const unsigned char option6 = 1 << 6;
	const unsigned char option7 = 1 << 7;

	cout << bitset<8>(option0) << endl; // 00000001
	cout << bitset<8>(option1) << endl; // 00000010
	cout << bitset<8>(option2) << endl; // 00000100
	cout << bitset<8>(option3) << endl; // 00001000
	cout << bitset<8>(option4) << endl; // 00010000
	cout << bitset<8>(option5) << endl; // 00100000
	cout << bitset<8>(option6) << endl; // 01000000
	cout << bitset<8>(option7) << endl; // 10000000

	cout << endl;

	unsigned char items_flag = 0;
	cout << "No Item \t" << bitset<8>(items_flag) << endl; // No Item         00000000

	// item0 on
	items_flag |= option0; // OR operator
	cout << "Item0 obtained \t" << bitset<8>(items_flag) << endl; // Item0 obtained  00000001

	// item3 on
	items_flag |= option3;
	cout << "Item3 obtained \t" << bitset<8>(items_flag) << endl; // Item3 obtained  00001001

	// item3 lost
	items_flag &= ~option3;
	cout << "Item3 lost \t" << bitset<8>(items_flag) << endl; // Item3 lost      00000001

	cout << endl;

	// has item1 ?
	if (items_flag & option1)
	{
		cout << "Has item1" << endl;
	}
	else
	{
		cout << "Not have item1" << endl;
	}

	// has item0 ?
	if (items_flag & option0)
	{
		cout << "Has item0" << endl;
	}
	else
	{
		cout << "Not have item0" << endl;
	}

	cout << endl;

	// obtain item 2, 3
	items_flag |= (option2 | option3);

	cout << bitset<8>(option2 | option3) << endl;
	cout << "Item 2, 3 obtained " << bitset<8>(items_flag) << endl;

	if ((items_flag & option2) && !(items_flag & option1)) // has item 2, have not item 1
	{
		items_flag ^= option2; // use XOR
		items_flag ^= option1;
		// items_flag ^= (option2 | option1);
	}

	cout << bitset<8>(items_flag) << endl;



	return 0;
}