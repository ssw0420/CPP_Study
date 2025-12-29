#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in) : m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};


// Warning: This class currently lacks a 'Copy Constructor'.
// Direct copying (e.g., IntArray b = a;) will cause a 'Double Free' crash.
// This will be fixed later using 'Deep Copy' techniques.
class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor" << endl;
	}

	~IntArray()
	{
		if (m_arr != nullptr)
		{
			delete[] m_arr; // Release allocated memory
			m_arr = nullptr; // Prevent dangling pointer
		}
	}

	int Size() { return m_length; }
};

int main(void)
{
	Simple s1(0);
	Simple s2(1);

	Simple* s3 = new Simple(2);
	delete s3;

	Simple* s4 = new Simple(3);

	/*Constructor 0
	Constructor 1
	Constructor 2
	Destructor 2
	Constructor 3
	Destructor 1
	Destructor 0*/

	while (true)
	{
		IntArray my_int_arr(1000); // If not use destructor for delete -> Memory leak
	}

	return 0;
}