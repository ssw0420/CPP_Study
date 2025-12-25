#include <iostream>
#include <cstddef> // std::nullptr_t

void doSomething(double* ptr)
{
	std::cout << "address of pointer variable in doSomething() " << &(*ptr) << std::endl; // address 1
	std::cout << "address of pointer variable in doSomething() " << &ptr << std::endl; // address 3
	if (ptr != nullptr)
	{
		// do something useful
		std::cout << *ptr << std::endl;
	}
	else
	{
		// do nothing with nullptr
		std::cout << "NULL ptr, do Nothing" << std::endl;
	}
}

int main()
{
	double* null_ptr = NULL; // c-style
	double* ptr = nullptr; // modern c++
	// double* ptr = 0;
	// double *ptr = { 0 };
	// double *ptr = { nullptr };
	double d = 123.4;
	std::cout << &d << std::endl;

	doSomething(ptr);
	doSomething(nullptr);
	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	std::nullptr_t nptr = nullptr;
	doSomething(nptr);

	std::cout << &d << std::endl; // address 1
	std::cout << "address of pointer variable in main() " << &(*ptr) << std::endl; // address 1
	std::cout << "address of pointer variable in main() " << &ptr << std::endl; // address 2

	/*address of pointer variable in doSomething() 000000772AEFF9F0
	NULL ptr, do Nothing
	address of pointer variable in doSomething() 000000772AEFF9F0
	NULL ptr, do Nothing
	address of pointer variable in doSomething() 000000772AEFF9F0
	123.4
	address of pointer variable in doSomething() 000000772AEFF9F0
	123.4
	address of pointer variable in doSomething() 000000772AEFF9F0
	NULL ptr, do Nothing
	address of pointer variable in main() 000000772AEFFA38*/

	return 0;
}