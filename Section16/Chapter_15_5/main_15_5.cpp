#include <iostream>
#include <memory>
#include "Resource.h"

auto DoSomething()
{
	//return std::unique_ptr<Resource>(new Resource(5));
	
	//auto res1 = std::make_unique<Resource>(5);
	//return res1;

	return std::make_unique<Resource>(5); // Resource length constructed
}

//auto DoSomething2(std::unique_ptr<Resource> res)
//void DoSomething2(std::unique_ptr<Resource> &res)
void DoSomething2(Resource * res)
{
	res->setAll(10);
	res->print();
	
	//return res;
}

int main()
{
	{
		// Memory leak
		//Resource* res = new Resource(10000000); // Resource length constructed
		
		// if not use delete, early return, throw, ...
		//std::unique_ptr<Resource> res(new Resource(10000000));
	}

	{
		std::unique_ptr<int> upi(new int);

		//auto* ptr = new Resource(5);
		//std::unique_ptr<Resource> res1(ptr);
		//auto res1 = std::make_unique<Resource>(5);

		auto res1 = DoSomething();
		
		res1->setAll(5);
		res1->print(); // 5 5 5 5 5

		std::unique_ptr<Resource> res2;

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl; // true
		std::cout << static_cast<bool>(res2) << std::endl; // false

		// res2 = res1; => unique pointer can NOT use copy semantics
		res2 = std::move(res1);

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl; // false
		std::cout << static_cast<bool>(res2) << std::endl; // true

		if (res1 != nullptr) res1->print(); // print NOTHING (nullptr)
		if (res2 != nullptr) res2->print(); // = (*res2).print(); => print 5 5 5 5 5
	} // Resource Destroyed

	{
		auto res1 = std::make_unique<Resource>(5); // Resource length constructed

		res1->setAll(1);
		res1->print(); // 1 1 1 1 1

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl; // true

		// res1 = DoSomething2(std::move(res1));
		DoSomething2(res1.get());
		
		//res1->print(); // 10 10 10 10 10 - use std::move(res1) -> can not print

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl; // false
	} // Resource destroyed

	/*{
		Resource* res3 = new Resource;
		std::unique_ptr<Resource> res4(res3);
		std::unique_ptr<Resource> res5(res3);

		delete res3;
	}*/

	return 0;
}