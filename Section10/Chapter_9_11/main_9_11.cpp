#include <cassert>
#include <iostream>

using namespace std;

class MyString
{

public:
	// use private member variable because of the address
	char* m_data = nullptr;
	int m_length = 0;

	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		//m_data[m_length - 1] = '\0';
	}

	/*MyString(const MyString& source) = delete;*/

	MyString(const MyString& source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString& source)
	{
		// if use shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length


		cout << "Assignemnt Operator" << endl;

		if (this == &source) // prevent self-assignment -  ex) hello = hello;
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	~MyString() // prevent memory leak
	{
		delete[] m_data;
	}


	char* GetString() { return m_data; }
	int GetLength() { return m_length; }
};

int main(void)
{
	MyString hello("Hello");

	cout << (int*)hello.m_data << endl; // 000001BE8BDC6770
	cout << hello.GetString() << endl;

	{
		MyString copy = hello; // Copy constructor
		cout << (int*)copy.m_data << endl; // 000001BE8BDC6E00
		cout << copy.GetString() << endl;
	}

	cout << hello.GetString() << endl;


	MyString str1 = hello; // Copy constructor
	MyString str2;
	str2 = hello; // Assignemnt Operator

	return 0;
}