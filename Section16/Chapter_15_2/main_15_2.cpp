#include <iostream>

using namespace std;

void DoSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void DoSomething(int&& ref)
{
	cout << "R-value ref" << endl;
}

int GetResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = GetResult();
	const int cx = 6;
	const int cy = GetResult();

	// L-value references

	int& lr1 = x; // Modifiable l-values
	//int& lr2 = cx; // can Not Compiled.  Non-modifiable l-values
	//int& lr3 = 5; // can Not Compiled.  R-values

	// const
	const int& lr4 = x; // Modifiable l-values
	const int& lr5 = cx; // Non-modifiable l-values;
	const int& lr6 = 5; // R-values


	// R-value references
	//int&& rr1 = x; // Modifiable l-values
	//int&& rr2 = cx; // Non-modifiable l-values
	int&& rr3 = 5; // R-values;
	int&& rrt7 = GetResult();

	cout << rr3 << endl; // 5
	rr3 = 10;
	cout << rr3 << endl; // 10

	//const int&& rr4 = x;  // can Not Compiled.  Modifiable l-values
	//const int&& rr5 = cx; // can Not Compiled.  Non-modifiable l-values
	const int&& rr6 = 5; // R-values

	// L/R-value reference parameters
	DoSomething(x);
	//DoSomething(cx);
	DoSomething(5);
	DoSomething(GetResult());

	return 0;
}