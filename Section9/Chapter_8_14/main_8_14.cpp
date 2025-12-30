#include <iostream>

using namespace std;

//enum FruitType
//{
//	APPLE,
//	BANANA,
//	CHERRY,
//};

class Fruit
{
public:
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};

	enum class InnerEnumClass
	{
		TEST,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{
		int test;
	};
private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type) {}

	FruitType GetType() const { return m_type; }
};

int main(void)
{
	Fruit apple(Fruit::APPLE);

	if (apple.GetType() == Fruit::APPLE) // compare
	{
		std::cout << "APPLE" << std::endl;
	}

	return 0;
}