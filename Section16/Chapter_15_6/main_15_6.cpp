#include <iostream>
#include "Resource.h"

void DoSomething(std::unique_ptr<Resource> res)
{

}

int main()
{
	//Resource* res = new Resource(3); // Resource length constructed
	//res->setAll(1);

	//DoSomething(std::make_unique<Resource>(10000));
	{
		//std::shared_ptr<Resource> ptr1(res);
		auto ptr1 = std::make_shared<Resource>(3);
		ptr1->setAll(1);

		ptr1->print(); // 1 1 1
		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res); // ptr2 can NOT know other shared_ptr

			auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print(); // 3 3 3

			std::cout << "Going out of the block" << std::endl;
		}

		ptr1->print(); // 3 3 3

		std::cout << "Going out of the outer block" << std::endl;
	} // Resource destroyed

	//std::getchar(); // waiting user input for checking ptr1's memory. already ptr1 return
	
	return 0;
}