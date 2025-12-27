#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};

struct Parameter
{
	void* ptr;
	Type type;
};

void PrintValue(void* ptr, Type type)
{
	switch (type) {
	case INT:
		cout << "Integer: " << *static_cast<int*>(ptr) << endl;
		break;
	case FLOAT:
		cout << "Float: " << *static_cast<float*>(ptr) << endl;
		break;
	case CHAR:
		cout << "Char: " << *static_cast<char*>(ptr) << endl;
		break;
	}
}

void Process(Parameter p)
{
	switch (p.type)
	{
	case INT:
		cout << *static_cast<int*>(p.ptr) << endl;
		break;
	case FLOAT:
		cout << *static_cast<float*>(p.ptr) << endl;
		break;
	case CHAR:
		cout << static_cast<char*>(p.ptr) << endl;
		break;
	}
}

int main(void)
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &c;
	ptr = &f;


	int* ptr_i = &i;

	cout << ptr_i << endl;
	// cout << ptr + 1 << endl; // 'void *': unknown size => can not pointer operating
	cout << ptr_i + 1 << endl;
	cout << &f << " " << ptr << endl; // 0000000D7036FB84 0000000D7036FBA4
	// cout << *ptr << endl; // cannot dereference an operand of type 'void'

	cout << *static_cast<float*>(ptr) << endl; // 3

	Type type = FLOAT;

	void* type_ptr = nullptr;

	type_ptr = &i;
	PrintValue(type_ptr, INT); // Integer: 5

	type_ptr = &f;
	PrintValue(type_ptr, FLOAT); // Float: 3

	type_ptr = &c;
	PrintValue(type_ptr, CHAR); // Char: a

	cout << endl;


	int level = 10;
	float hp = 100;
	char name[] = "Shin";

	Parameter mylevel;
	mylevel.ptr = &level;
	mylevel.type = INT;
	Process(mylevel);
	
	Parameter myHP;
	myHP.ptr = &hp;
	myHP.type = FLOAT;
	Process(myHP);

	Parameter myName;
	myName.ptr = name; // array name is address => not using reference
	myName.type = CHAR;
	Process(myName);

	return 0;
}