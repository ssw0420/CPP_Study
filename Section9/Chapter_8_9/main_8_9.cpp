#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something()
	{
		cout << "Constructor" << endl;
	}
	
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;

		cout << "Copy Constructor" << endl;
	}

	void SetValue(int value) { m_value = value; }
	//int GetValue() { return m_value; }
	int GetValue() const { return m_value; }
};

void print(Something st)
{
	cout << &st << endl;
	cout << st.GetValue() << endl;
}

void printRef(Something& st)
{
	cout << &st << endl;
	cout << st.GetValue() << endl;
}

class SomethingString
{
public:
	string m_value = "default";

	const string& GetValue() const
	{
		cout << "const version" << endl;
		return m_value;
	}

	string& GetValue()
	{
		cout << "non-const version" << endl;
		return m_value;
	}
};


int main(void)
{
	const int i = 0;
	// i = 1; // cannot assign to a variable that is const

	const Something something;
	//something.SetValue(3); // cannot convert 'this' pointer from 'const Something' to 'Something &'
	// cout << something.GetValue() << endl; // cannot convert 'this' pointer from 'const Something' to 'Something &'

	// After use const 
	cout << something.GetValue() << endl;

	cout << endl;

	Something test;
	cout << &test << endl;
	print(test);

	cout << endl;

	Something testRef;
	cout << &testRef << endl;
	printRef(testRef);

	cout << endl;

	SomethingString somethingstr1;
	somethingstr1.GetValue(); // non-const version

	const SomethingString somethingstr2;
	somethingstr2.GetValue(); // const version

	return 0;
}