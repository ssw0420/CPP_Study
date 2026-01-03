#include "Student.h"
#include "Teacher.h"

int main(void)
{
	//Student std("Jack Jack");
	//Teacher teacher1("Dr. H");
	Student std("Jack Jack");
	std.SetName("Jack Jack2");
	std.GetName();

	Teacher teacher1("Dr. H");
	teacher1.SetName("Dr. K");

	std::cout << teacher1.GetName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.DoNothing();
	teacher1.DoNothing();

	std.study();
	teacher1.teach();

	Person person;
	person.SetName("Mr. Incredible");
	person.GetName();
	//person.study(); // can NOT - error
	//person.teach(); // can NOT - error

	return 0;
}