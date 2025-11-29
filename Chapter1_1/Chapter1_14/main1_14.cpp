#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9
#define MY_WORLD "Hello, World"
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#define LIKE_APPLE

int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_WORLD << endl;
	cout << MAX(1 + 3, 2) << endl; // 위의 매크로 정의에서, 괄호를 사용하였기 때문에 내부 연산도 가능

	cout << std::max(1 + 3, 2) << endl;


#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange " << endl;
#endif

	return 0;
}