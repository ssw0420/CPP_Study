#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		//std::string s;
		//std::cout << typeid(std::string::size_type).name() << std::endl; // unsigned __int64
		//s.resize(-1);
		//throw std::runtime_error("Bad thing happened");
		throw CustomException();
	}
	/*catch (std::length_error& exception)
	{
		std::cerr << "Length_Error" << std::endl;
		std::cerr << exception.what() << std::endl;
	}*/
	catch (std::exception& exception)
	{
		std::cout << typeid(exception).name() << std::endl; // class ~~
		std::cerr << exception.what() << std::endl;
	}

	return 0;
}