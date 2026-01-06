#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource> GenerateResource()
{
	AutoPtr<Resource> res(new Resource(100000000));

	return res;
}

template<class T>
void MySwap(T& a, T& b)
{
	// copy
	/*T tmp = a;
	a = b;
	b = tmp;*/

	// move
	T tmp{ std::move(a) };
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	//{
	//	AutoPtr<Resource> res1(new Resource(10000000));

	//	cout << res1.m_ptr << endl;

	//	//AutoPtr<Resource> res2 = res1;
	//	AutoPtr<Resource> res2 = std::move(res1);

	//	cout << res1.m_ptr << endl; // nullptr
	//	cout << res2.m_ptr << endl;
	//}

	{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);

		res1->print();
		res2->print();
	}

	{
		vector<string> v;
		string str = "Hello";

		v.push_back(str); // copy semantics

		cout << str << endl; // Hello
		cout << v[0] << endl; // Hello

		v.push_back(std::move(str)); // move semantics

		cout << str << endl; // print NOTHING
		cout << v[0] << " " << v[1] << endl; // Hello Hello
	}

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	return 0;
}