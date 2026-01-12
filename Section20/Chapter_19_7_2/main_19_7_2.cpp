#include <iostream>
#include <vector>
#include <cstdio>
#include <utility> // std::forward

using namespace std;

class CustomVector
{
public:
	unsigned n_data = 0;
	int* ptr = nullptr;

	CustomVector(const unsigned& _n_data, const int& _init = 0)
	{
		cout << "Constructor" << endl;

		init(_n_data, _init);
	}

	CustomVector(CustomVector& l_input)
	{
		cout << "Copy Constructor" << endl;

		init(l_input.n_data);

		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = l_input.ptr[i];
	}

	CustomVector(CustomVector&& r_input) noexcept
	{
		cout << "Move Constructor" << endl;

		n_data = r_input.n_data;
		ptr = r_input.ptr;

		r_input.n_data = 0;
		r_input.ptr = nullptr;
	}

	~CustomVector()
	{
		delete[] ptr;
	}

	void init(const unsigned& _n_data, const int& _init = 0)
	{
		n_data = _n_data;
		ptr = new int[n_data];
		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = _init;
	}
};

void DoSomething(CustomVector& vec)
{
	cout << "Pass by L-reference" << endl;
	CustomVector new_vec(vec);
}

void DoSomething(CustomVector&& vec)
{
	cout << "Pass by R-reference" << endl;
	CustomVector new_vec(std::move(vec));
}

template<typename T>
//void DoSomethingTemplate(T vec)
void DoSomethingTemplate(T&& vec)
{
	//DoSomething(vec);
	DoSomething(std::forward<T>(vec));
}

int main()
{
	CustomVector my_vec(10, 1024); // Constructor
	CustomVector temp(my_vec); // Copy Constructor

	cout << my_vec.n_data << endl; // 10
	cout << temp.n_data << endl; // 10

	CustomVector temp2(std::move(my_vec)); // Move Constructor

	cout << my_vec.n_data << endl; // 0
	cout << temp2.n_data << endl; // 10

	cout << endl;

	CustomVector my_vec2(10, 1024);

	cout << endl;

	DoSomething(my_vec2);

	cout << endl;

	DoSomething(std::move(my_vec2));

	cout << endl;

	DoSomething(CustomVector(10, 8));

	cout << endl;
	cout << endl;
	cout << endl;

	CustomVector my_vec3(10, 1024);

	cout << endl;
	
	DoSomethingTemplate(my_vec3);

	cout << endl;

	DoSomethingTemplate(CustomVector(10, 8));

	return 0;
}