#include <iostream>
#include <typeinfo>

//int computeDamage(int weapon_id)
//{
//	if (weapon_id == 0) // sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//
//	//...
//}

enum Color // user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	BLUE,
};

enum Feeling
{
	HAPPY = -3,
	JOY,
	TIRED,
	BAD = 5,
	SAD = 5,
	TEST
	// BLUE // error C2365: 'BLUE': redefinition; previous definition was 'enumerator'
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl; // 0 0

	my_color = COLOR_RED;
	cout << my_color << " " << endl; // 1

	Feeling my_feel = HAPPY;
	cout << my_feel << " " << TIRED; // -3 -1


	int color_id = COLOR_RED; // 1

	// Color test_color = 3; // a value of type cannot be used to initialize an entity of type
	Color test_color = static_cast<Color>(3);

	cout << color_id << endl;
	cout << test_color << endl;

	int in_number;
	cin >> in_number;

	if (in_number == COLOR_BLACK)
	{
		test_color = static_cast<Color>(in_number);
		cout << test_color << endl;
	}

	return 0;
}