#pragma once

#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : Resource Acquisition Is Initialization

void DoSomething()
{
	// Resource* res = new Resource; // dull pointer

	// work with res

	//if (true) return; // early return

	// exception
	//try
	//{
	//	Resource* res = new Resource;
	//	if (true) throw - 1; // exception

	//	delete res;
	//}
	//catch (...)
	//{

	//}


	// delete res;


	try
	{
		//AutoPtr<Resource> res = new Resource; // smart pointer
		AutoPtr<Resource> res(new Resource);

		return;

		if (true)
		{
			throw - 1; // exception
		}
	}
	catch (...)
	{

	}

	return;
}

int main()
{
	//DoSomething();

	{
		AutoPtr<Resource> res1(new Resource); // int i; int *ptr1(&i); int *ptr2 = nullptr;
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1; // move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	// syntax vs semantics
	int x = 1, y = 1;
	x + y; // add

	string str1("Hello"), str2("World");
	str1 + str2; // append
	// value semantics (copy semantics)
	// reference semantics (pointer)
	// move semantics (move)

	return 0;
}