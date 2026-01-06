#include <iostream>
#include <memory>
#include "Resource.h"

auto DoSomething()
{
	return std::unique_ptr<Resource>(new Resource(5));
}

void DoSomething2(std::unique_ptr<Resource>& res)
{
	res->setAll(10);
}

int main()
{
	{
		// Memory leak
		Resource* res = new Resource(10000000); // Resource length constructed
		
		// if not use delete, early return, throw, ...
	}

	{
		std::unique_ptr<Resource> res2(new Resource(10000000));
		// Resource length constructed
		// Resource destroyed
	}

	return 0;
}