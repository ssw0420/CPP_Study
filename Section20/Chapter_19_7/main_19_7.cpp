#include <iostream>
#include <vector>
#include <utility> // std::forward

using namespace std;

struct MyStruct
{ };

void func(MyStruct& s)
{
	cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{
	cout << "Pass by R-ref" << endl;
}

//template<typename T>
//void func_wrapper(T t)
//{
//	func(t);
//}
template<typename T>
void func_wrapper(T&& t)
{
	func(std::forward<T>(t));
}

int main(void)
{
	MyStruct s; // l-value reference

	func(s);

	func(MyStruct()); // r-value reference


	func_wrapper(s); // Pass by L-ref
	func_wrapper(MyStruct()); // Pass by L-ref - perfect forwarding -> Pass by R-ref


	return 0;
}