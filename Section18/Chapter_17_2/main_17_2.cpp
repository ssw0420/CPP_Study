#include <iostream>
#include <string>
#include <vector>
#include <sstream>


template<typename T>
std::string ToString(T x)
{
	std::ostringstream osstream; // output string stream

	osstream << x;
	return osstream.str();
}

template<typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str); // input string stream
	return (isstream >> x) ? true : false;
}

int main(void)
{
	std::string my_string("My string");

	std::string second_string(my_string); // copy constructor

	std::string third_string(my_string, 3); // start index = 3 => slice: my_

	std::string string4(my_string, 3, 5); // start index = 3 and take 5 char => s t r i n

	std::cout << my_string << std::endl; // My string
	std::cout << second_string << std::endl; // My string
	std::cout << third_string << std::endl; // string
	std::cout << string4 << std::endl; // strin
	
	std::cout << std::endl;

	const char * my_string1 = "my_string";
	std::string my_string2(my_string1); // copy constructor
	std::cout << my_string2 << std::endl; // my_string


	std::string my_string3(my_string1, 3); // start at 0 index, take 3 char
	std::cout << my_string3 << std::endl; // my_

	std::string my_string4(10, 'A');
	std::cout << my_string4 << std::endl; // AAAAAAAAAA

	std::cout << std::endl;

	std::vector<char>vec;
	for (auto e : "Today is a good_day.")
		vec.push_back(e);

	std::string vec_string(vec.begin(), vec.end());
	std::cout << vec_string << std::endl;


	std::string vec_string2(vec.begin(), std::find(vec.begin(), vec.end(), 'g')); // if find => stop
	std::cout << vec_string2 << std::endl; // Today is a

	std::cout << std::endl;

	//std::string my_str(4); can NOT implicit casting
	std::string my_str(std::to_string(1004));

	std::cout << my_str << std::endl; // 1004

	my_str += std::to_string(128);
	std::cout << my_str << std::endl; // 1004128

	int i = std::stoi(my_str); // string to integer
	float f = std::stof(my_str); // string to float
	std::cout << i << std::endl; // 1004128
	std::cout << f << std::endl; // 1.00413e+06

	std::string test_str(ToString(3.141592));

	std::cout << test_str << std::endl; // 3.14159

	double d;
	if (FromString(test_str, d))
		std::cout << d << std::endl; // 3.14159
	else
		std::cout << "Cannot convert string to double" << std::endl;

	return 0;
}