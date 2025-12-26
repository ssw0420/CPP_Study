#include <iostream>

using namespace std;

int main(void)
{
	int value = 7;
	int* ptr = &value;

	cout << ptr << endl; // 000000FF8AFDF854


	// +- 4byte => sizeof(int)
	cout << sizeof(int) << endl; // 4
	cout << uintptr_t(ptr + -1) << endl; // 1097548560464
	cout << uintptr_t(ptr) << endl; // 1097548560468
	cout << uintptr_t(ptr + 1) << endl; // 1097548560472
	cout << uintptr_t(ptr + 2) << endl; // 1097548560476

	cout << endl;

	double dv = 7.0;
	double* d_ptr = &dv;

	// +- 8byte => sizeof(double)
	cout << sizeof(double) << endl; // 8
	cout << uintptr_t(d_ptr - 1) << endl; // 112018783216
	cout << uintptr_t(d_ptr) << endl; // 112018783224
	cout << uintptr_t(d_ptr + 1) << endl; // 112018783232
	cout << uintptr_t(d_ptr + 2) << endl; // 112018783240

	cout << endl;

	short sv = 7;
	short* s_ptr = &sv;

	// +- 2byte => sizeof(short)
	cout << sizeof(short) << endl; // 2
	cout << uintptr_t(s_ptr - 1) << endl; // 141884126578
	cout << uintptr_t(s_ptr) << endl; // 141884126580
	cout << uintptr_t(s_ptr + 1) << endl; // 141884126582
	cout << uintptr_t(s_ptr + 2) << endl; // 141884126584

	cout << endl;
	
	int array[] = { 9, 7, 5, 3, 1 };
	cout << array[0] << " " << (uintptr_t)&array[0] << endl; // 9 668445178776
	cout << array[1] << " " << (uintptr_t)&array[1] << endl; // 7 668445178780
	cout << array[2] << " " << (uintptr_t)&array[2] << endl; // 5 668445178784
	cout << array[3] << " " << (uintptr_t)&array[3] << endl; // 3 668445178788
	cout << array[4] << " " << (uintptr_t)&array[4] << endl; // 1 668445178792

	cout << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << array[i] << " " << (uintptr_t)&array[i] << endl; // +- 4byte
	}

	cout << endl;

	int* i_ptr = array;
	for (int i = 0; i < 5; ++i)
	{
		cout << *(i_ptr + i) << " " << (uintptr_t)(i_ptr + i) << endl; // +- 4byte
	}

	cout << endl;

	long long ll_array[] = { 9, 7, 5, 3, 1 };
	long long* ll_ptr = ll_array;

	for (int i = 0; i < 5; ++i)
	{
		cout << *(ll_ptr + i) << " " << (uintptr_t)(ll_ptr + i) << endl; // +- 8byte
	}

	cout << endl;

	char name[] = "Jack Jack";
	const int n_name = sizeof(name) / sizeof(char);

	char* c_ptr = name;

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i); // Jack Jack\0
	}

	cout << endl;

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(c_ptr + i); // Jack Jack\0
	}

	return 0;
}