#include <iostream>
#include <cstdint>

int main(void)
{
	std::int16_t i(5); // 16 bits = 2 bytes
	std::int8_t myint = 65; // char

	std::cout << myint << std::endl; // char형으로 출력
	std::cout << +myint << std::endl; // 정수 형으로 출력

	std::int_fast8_t fi(5);
	std::int_least64_t fl(5); // 적어도 8 byte

	return 0;
}