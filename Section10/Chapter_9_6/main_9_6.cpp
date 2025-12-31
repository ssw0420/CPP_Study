#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10] = { 0, 1 ,2, 3, 4, 5, 6, 7, 8, 9 };

public:
	//void SetItem(int index, int value)
	//{
	//	m_list[index] = value;
	//}

	//int GetItem(int index)
	//{
	//	return m_list[index];
	//}

	//int* GetList()
	//{
	//	return m_list;
	//}

	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}


};


int main(void)
{
	//IntList my_list;
	//my_list.SetItem(3, 1); // = m_list[3] = 1
	//cout << my_list.GetItem(3) << endl; // 1

	//my_list.GetList()[3] = 10;
	//cout << my_list.GetList()[3] << endl; // 10

	IntList my_list;
	my_list[3] = 10;
	cout << my_list[3] << endl;

	cout << endl;

	const IntList my_const_list{};
	// my_const_list[3] = 10;
	cout << my_const_list[3] << endl;

	IntList* list = new IntList;
	// list[3] = 10; Not OK
	(*list)[3] = 10; // OK

	return 0;
}