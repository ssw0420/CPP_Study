#include <iostream>

using namespace std;

void doSomething(int students_scores[])
{
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << endl;
	
	cout << "Size in doSomething" << sizeof(students_scores) << endl; // unsigned long long : pointer size => 80
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };

	// default : hexadecimal
	cout << (int)students_scores << endl; // = (int)&students_scores
	cout << (int)&students_scores << endl; // = (int)&(students_scores[0])
	cout << (int)&(students_scores[0]) << endl;
	cout << (int)&(students_scores[1]) << endl; // (int)&(students_scores[0]) + 4
	cout << (int)&(students_scores[2]) << endl; // (int)&(students_scores[1]) + 4
	cout << (int)&(students_scores[3]) << endl; // (int)&(students_scores[2]) + 4

	cout << sizeof(students_scores) << endl;

	cout << endl;

	doSomething(students_scores);
}