#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main(void)
{
	Person person;

	person.age = 5; // '.' - member selection operator
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl; // 000000825C6FF918
	cout << &ref2 << endl; // 000000825C6FF918

	return 0;
}