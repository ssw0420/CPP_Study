#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main(void)
{
	using namespace std;

	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	// if use dynamic allocation
	Student* ptr_std1 = new Student("WORLD", 0);
	Teacher* ptr_teacher1 = new Teacher("HELLO");
	Lecture Test("Dynamic Allocation");
	Test.assignTeacher(ptr_teacher1);
	Test.registerStudent(ptr_std1);

	// Composition Relationship
	//Lecture lec1("Introduction to Computer Programming");
	//lec1.assignTeacher(Teacher("Prof. Hong"));
	//lec1.registerStudent(Student("Jack Jack", 0));
	//lec1.registerStudent(Student("Dash", 1));
	//lec1.registerStudent(Student("Violet", 2));

	//Lecture lec2("Computational Thinking");
	//lec2.assignTeacher(Teacher("Prof. Good"));
	//lec2.registerStudent(Student("Jack Jack", 0));

	// Composition Relationship - Upgrade
	//Lecture lec1("Introduction to Computer Programming");
	//lec1.assignTeacher(teacher1);
	//lec1.registerStudent(std1);
	//lec1.registerStudent(std2);
	//lec1.registerStudent(std3);

	//Lecture lec2("Computational Thinking");
	//lec2.assignTeacher(teacher2);
	//lec2.registerStudent(std1);

	// Aggregation Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);





	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.Study();

		cout << lec1 << endl;
		cout << lec2 << endl;

		cout << endl;
		
		cout << Test << endl;

		Test.Study();

		cout << Test << endl;
	}

	delete ptr_std1;
	delete ptr_teacher1;

	return 0;
}