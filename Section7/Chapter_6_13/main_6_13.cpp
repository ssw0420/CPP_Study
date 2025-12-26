#include <iostream>

using namespace std;

int main()
{
	int value = 5;
	int* ptr = &value;
	*ptr = 6;

	cout << *ptr << endl; // 6

	const int c_value = 5;
	const int* c_ptr = &c_value;
	// *c_ptr = 6; // you cannot assign to a variable that is const

	cout << *c_ptr << endl; // 5

	int value2 = 5;
	const int* c_ptr2 = &value2;
	// *c_ptr2 = 6; // you cannot assign to a variable that is const

	cout << *c_ptr2 << endl; // 5

	value = 6;
	cout << value << endl; // 6



	int i_value1 = 5;
	const int* i_ptr;
	i_ptr = &i_value1;

	int i_value2 = 6;
	i_ptr = &i_value2;

	cout << *i_ptr << endl; // 6

	// *i_ptr2 = 7; // you cannot assign to a variable that is const



	int j_value = 5;
	// int* const j_ptr; // const variable requires an initializer
	int* const j_ptr = &j_value;

	*j_ptr = 10;
	cout << *j_ptr << endl; // 10

	int j_value2 = 8;
	// j_ptr = &j_value2; // you cannot assign to a variable that is const


	int k_value = 5;
	const int* const k_ptr = &k_value;

	return 0;
}