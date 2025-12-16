#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	std::int8_t i(97);

	typedef double distance_t;
	double my_distance;

	distance_t home2work;
	
	typedef std::vector<std::pair<std::string, int>> pairlist_t;
	std::vector<std::pair<std::string, int>> pairlist;

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	using pairlist_test = std::vector<std::pair<std::string, int>>;
	pairlist_test pairlist_test1;

	return 0;
}