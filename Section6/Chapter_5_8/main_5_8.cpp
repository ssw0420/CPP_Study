#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b') break;
		
		if (ch == 'r') return;
	}

	cout << "Hello" << endl;
}

int main(void)
{
	int count = 0;

	while (true)
	{
		cout << count << endl;

		if (count == 10) break;
		count++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;
		cout << i << endl;
	}

	do
	{
		if (count == 5) continue;

		cout << count << endl;
	} while (++count < 10);

	//breakOrReturn();

	int countNum(0);
	bool escape_flag = false;

	//while (!escape_flag)
	//{
	//	char ch;
	//	cin >> ch;

	//	cout << ch << " " << countNum++ << endl;

	//	if (ch == 'x')
	//		escape_flag = true;
	//}

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << countNum++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}