#include <iostream>

using namespace std;

int main(void)
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;

	int array[num_rows][num_columns]; // row-major
	// int array[num_columns][num_rows]; // column-major

	array[0][0] = 1;
	array[0][1] = 2;

	int array2[num_rows][num_columns] =
	{
		{1, 2, 3, 4, 5},		// row 0
		{6, 7, 8, 9, 10},		// row 1
		{11, 12, 13, 14, 15}	// row 2
	};

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			//cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout << array2[row][col] << '\t';
		}
		cout << endl;
	}

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			//cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout << (int)&array2[row][col] << '\t';
		}
		cout << endl;
	}

	int array3[num_rows][num_columns] =
	{
		{1, 2, },				// row 0
		{6, 7, 8, 9, 10},		// row 1
		{11, 12, 13, 14, 15}	// row 2
	};

	int array4[][num_columns] =
	{
		{1, 2, },				// row 0
		{6, 7, 8, 9, 10},		// row 1
		{11, 12, 13, 14, 15}	// row 2
	};

	// an array may not have elements of this type
	//int array4[][] =
	//{
	//	{1, 2, 3, 4, 5},		// row 0
	//	{6, 7, 8, 9, 10},		// row 1
	//	{11, 12, 13, 14, 15}	// row 2
	//};


	return 0;
}