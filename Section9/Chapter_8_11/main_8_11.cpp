#include <iostream>

using namespace std;

class Something
{
public: 
	class _init
	{
	public:
		_init()
		{
			s_value = 1234;
		}
	};

private:
	static int s_value;
	int m_value = 0;

	static _init s_initializer;

public:
	//Something() : m_value(123), s_value(1024) // s_value is not a nonstatic data member or base class of class
	//{

	//}

	static int getValue()
	{
		// return this->s_value; // 'this': can only be referenced inside non-static member functions or non-static data member initializers
		//return m_value; // error C2597 : illegal reference to non - static member 'Something::m_value'
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}

	int tempNum(int num)
	{
		return this->s_value;
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main(void)
{
	// cout << Something::s_value << endl;
	cout << Something::getValue() << endl;

	Something s1;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	//int (Something:: * fptr1)() = &s1.temp();
	int(Something:: * fptr1)() = &Something::temp;
	
	Something s2;
	cout << (s2.*fptr1)() << endl;

	int(Something:: * fptrNum)(int) = &Something::tempNum;
	Something sNum;
	cout << (sNum.*fptrNum)(10) << endl;

	// int(Something:: * fptr2)() = &Something::getValue; //'initializing': cannot convert from 'int (__cdecl *)(void)' to 'int (__cdecl Something::* )(void)'
	int(*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;



	return 0;
}