#include <iostream>

int main()
{
	using namespace std;

	//enum Color
	//{
	//	RED,
	//	BLUE
	//};

	//enum Fruit
	//{
	//	BANANA,
	//	APPLE,
	//};

	enum class Color
	{
		RED,
		BLUE,
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	//Color color = RED;
	//Fruit fruit = BANANA;

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	/*if (color == fruit)
	{
		cout << "Color is fruit ?" << endl;
	}*/

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Color color3 = Color::BLUE;

	if (color1 == color2)
	{
		cout << "Color1 and Color2 is same." << endl;
	}

	if (color2 == color3)
	{
		cout << "Color2 and Color3 is same." << endl;
	}
}