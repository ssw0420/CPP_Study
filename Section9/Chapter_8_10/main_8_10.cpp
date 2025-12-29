#include <iostream>

using namespace std;

int generateID()
{
	static int s_id = 0;
	return ++s_id;
}

class Something
{
public:
	int m_value = 1;
};

class SomethingStatic
{
public:
	//static int m_value = 1; // a static data member with an in-class initializer must have non-volatile const integral type or be specified as 'inline'
	static int s_value;
};

int SomethingStatic::s_value = 1; // define in cpp

int main()
{
	cout << generateID() << endl; // 1
	cout << generateID() << endl; // 2
	cout << generateID() << endl; // 3

	Something st1;
	Something st2;

	st1.m_value = 2;

	cout << &st1.m_value << " " << st1.m_value << endl; // 0000001EE418F754 2
	cout << &st2.m_value << " " << st2.m_value << endl; // 0000001EE418F774 1


	cout << &SomethingStatic::s_value << " " << SomethingStatic::s_value << endl; // 00007FF706F7F048 1

	SomethingStatic stst1;
	SomethingStatic stst2;

	stst1.s_value = 2;

	cout << &stst1.s_value << " " << stst1.s_value << endl; // 00007FF706F7F048 2
	cout << &stst2.s_value << " " << stst2.s_value << endl; // 00007FF706F7F048 2

	stst1.s_value = 1024;

	cout << &SomethingStatic::s_value << " " << SomethingStatic::s_value << endl; // 00007FF706F7F048 1024

	return 0;
}