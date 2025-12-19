#include <iostream>
#include <string>

using namespace std;

//void printPerson(double height, float weight, int age, string name)
//{
//
//}

struct Person
{
	double height = 3.0;
	float weight = 200.0;
	int age = 100;
	string name = "Jack";

	void printPerson()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family
{
	Person me, mom, dad;
};

struct Employee // 2 + 4 + 8 = 14bytes x
{
	short	id;		// 2bytes
	int		age;	// 4bytes
	double	wage;	// 8bytes
};

struct EmployeeOptimized
{
	double wage;
	int    age;
	short  id;
};

struct Bad
{
	char   a;  // 1
	double b;  // 8
	char   c;  // 1
};

struct Good
{
	double b; // 8
	char   a; // 1
	char   c; // 1
};



Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Shin" };

	return me;
}

//void printPerson(Person p)
//{
//	cout << p.height << " " << p.weight << " " << p.age << " " << p.name;
//	cout << endl;
//}

int main()
{
	//double height;
	//float weight;
	//int age;
	//string name;

	//Person me;
	Person mon;
	Person dad;


	//me.age = 25;
	//me.name = "Shin";
	//me.height = 2.0;
	//me.weight = 100.0;

	Person me{ 2.0, 100.0, 20, "Shin" };
	// printPerson(me);
	me.printPerson();


	Person me2(me);
	me2.printPerson();

	Person me3;
	me3 = me;
	me3.printPerson();


	Person me_from_func = getMe();
	me_from_func.printPerson();


	Person test;
	cout << test.name << endl; // Jack

	Person test_init{ 2.0, 100.0, 20, "Shin" };
	cout << test_init.name << endl; // Shin

	cout << endl;

	Employee emp1;
	cout << sizeof(Employee) << endl;

	EmployeeOptimized empOptimized;
	cout << sizeof(EmployeeOptimized) << endl;

	cout << sizeof(Bad) << " " <<  sizeof(Good) << endl;

	return 0;
}