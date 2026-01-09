#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

using namespace std;

int main()
{
	//cout << "Enter a number" << endl;

	//int i;
	//cin >> i;

	//cout << i << endl;

	//char buf[5];
	//cin >> setw(5) >> buf; // input: abcdefghij

	//cout << buf << endl; // output : abcd

	//cin >> setw(5) >> buf; // input NOTHING
	//cout << buf << endl; // output : efgh

	//cin >> setw(5) >> buf; // input NOTHING
	//cout << buf << endl; // output : ij

	//char ch;

	//while (cin >> ch) // Hello World
	//	cout << ch; // HelloWorld

	//int i;
	//float f;
	//cin >> i >> f; // 1024 3.14

	//cout << i << " " << f << endl; // 1024 3.14

	//char ch2;

	//while (cin.get(ch2)) // Hello World
	//	cout << ch2; // Hello World

	//char buf[5];
	//// with NULL char
	//cin.get(buf, 5); // Hello World

	//cout << cin.gcount() << " " << buf << endl; // 4 Hell

	//cin.get(buf, 5);

	//cout << cin.gcount() << " " << buf << endl; // 4 o Wo

	//cin.get(buf, 5);

	//cout << cin.gcount() << " " << buf << endl; // 3 rld


	//char buf[5];
	//cin.getline(buf, 5); // Hello World
	//cout << cin.gcount() << " " << buf << endl; // 4 Hell

	//cin.getline(buf, 5);
	//cout << cin.gcount() << " " << buf << endl; // 0


	//char buf[100];
	//cin.getline(buf, 100); // Hello World
	//cout << cin.gcount() << " " << buf << endl; // 4 Hell

	//cin.getline(buf, 100);
	//cout << cin.gcount() << " " << buf << endl; // 0

	//string buf;

	//getline(cin, buf); // Hello World
	//cout << cin.gcount() << " " << buf << endl; // 0 Hello World


	//char buf[1024];
	//cin.ignore(2);

	//cin >> buf; // Hello
	//cout << buf; // llo


	//char buf[1024];
	//// input: Hello
	//cout << (char)cin.peek() << endl; // H
	//cin >> buf;
	//cout << buf << endl; // Hello

	char buf[1024];

	cin >> buf;
	cout << buf << endl; // Hello

	cin.unget(); // take 'o'
	cin >> buf;
	cout << buf << endl; // o

	cin.putback('A'); // put 'A' in the buffer
	cin >> buf;
	cout << buf << endl; // 'A'

	return 0;
}