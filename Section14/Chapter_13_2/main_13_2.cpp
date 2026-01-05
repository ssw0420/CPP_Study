#include "MyArray.h"

int main()
{
	MyArray<char> my_array(10);

	for (int i = 0; i < my_array.GetLength(); ++i)
		my_array[i] = i + 65;

	my_array.print(); // A B C D E F G H I J

	MyArray<double> my_array2(10);

	for (int i = 0; i < my_array2.GetLength(); ++i)
		my_array2[i] = i * 10;

	my_array2.print(); // 0 10 20 30 40 50 60 70 80 90

	return 0;
}