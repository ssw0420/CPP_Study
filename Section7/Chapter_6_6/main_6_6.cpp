#define _CRT_SECURE_NO_WARNINGS // use strcpy

#include <iostream>
#include <cstring> // strcpy

using namespace std;

int main()
{
	char mySTR[] = "TEXT"; // "TEXT\0"

	for (int i = 0; i < 5; i++)
	{
		cout << mySTR[i] << endl; // T E X T
		cout << (int)mySTR[i] << endl; // 84 69 88 84 0
	}

	cout << endl;

	cout << sizeof(mySTR) / sizeof(mySTR[0]) << endl; // 5

	cout << endl;

	char myInputString[255];
	
	cin >> myInputString; // input: Hello
	cout << myInputString << endl; // Hello

	myInputString[0] = 'A';
	cout << myInputString << endl; // Aello

	myInputString[2] = '\0';
	cout << myInputString << endl; // Ae

	cout << endl;

	cin.ignore();
	cout << "Enter myString: " << endl;
	char myString[255];

	cin.getline(myString, 255); // can input blank char - ex) Jack Hello

	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0') break;

		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}
	//Jack Hello
	//	J 74
	//	a 97
	//	c 99
	//	k 107
	//	32
	//	H 72
	//	e 101
	//	l 108
	//	l 108
	//	o 111

	cout << endl;

	char source[] = "Copy this!";
	char dest[50];
	char test[50];
	strcpy(dest, source); // string copy

	cout << source << endl;
	cout << dest << endl;

	strcpy_s(test, 50, source);
	cout << test << endl;

	//strcat()
	//strcmp()

	strcat(dest, source);
	cout << source << endl;
	cout << dest << endl;

	cout << strcmp(source, dest) << endl;

	if (strcmp(source, dest) == 0) // same
	{
		cout << "same" << endl;
	}

	return 0;
}