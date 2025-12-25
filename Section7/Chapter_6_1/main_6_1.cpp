#include <iostream>

using namespace std;

#define TEST_STUDENTS 100000

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACK,	// = 0
	DASH,	// = 1
	VIOLET, // = 2
	NUM_STUDENTS, // = 3 LAST
};

int main()
{
	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int = 20 bytes

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;

	one_student_score = 100;

	cout << endl;

	// array[index]
	student_scores[0] = 100; // 1st element
	student_scores[1] = 80; // 2nd element
	student_scores[2] = 90; // 3rd element
	student_scores[3] = 50; // 4th element
	student_scores[4] = 0; // 5th element

	cout << student_scores[0] << endl;
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	cout << student_scores[4] << endl;

	cout << endl;

	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

	cout << endl;

	cout << sizeof(Rectangle) << endl; // 8

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl; /// 80

	cout << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	int my_array[5] = { 1, 2, 3, 4, 5 };

	cout << my_array[0] << endl;
	cout << my_array[1] << endl;
	cout << my_array[2] << endl;
	cout << my_array[3] << endl;
	cout << my_array[4] << endl;

	cout << endl;

	my_array[0] = 10;
	cout << my_array[0] << endl;

	cout << endl;

	int my_array2[] = { 1, 2, 3, 4, 5 };

	cout << my_array2[0] << endl;
	cout << my_array2[1] << endl;
	cout << my_array2[2] << endl;
	cout << my_array2[3] << endl;
	cout << my_array2[4] << endl;

	cout << endl;

	int my_array3[5] = { 1, 2, }; // 1, 2, 0, 0, 0

	cout << my_array3[0] << endl;
	cout << my_array3[1] << endl;
	cout << my_array3[2] << endl;
	cout << my_array3[3] << endl;
	cout << my_array3[4] << endl;

	cout << endl;
	
	int my_array4[5] = { 1, 2, 3, 4, 5 };

	cout << my_array4[JACK] << endl;
	cout << my_array4[DASH] << endl;
	cout << my_array4[VIOLET] << endl;
	cout << my_array4[3] << endl;
	cout << my_array4[4] << endl;

	cout << endl;

	int students_scores[NUM_STUDENTS];

	students_scores[JACK] = 0;
	students_scores[DASH] = 50;
	students_scores[VIOLET] = 100;


	//int num_students = 0;
	//cin >> num_students;

	//int input_array[num_students]; // expression did not evaluate to a constant
	int test_array[TEST_STUDENTS];

	const int num_test = 5;
	int num_test_array[num_test]; // const

	return 0;
}