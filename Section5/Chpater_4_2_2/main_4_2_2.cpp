#include <iostream>
#include "MyConstants.h"
using namespace std;

// forward declaration
extern void doSomething();
extern int a;

int main()
{

	cout << a << endl;

	cout << endl;

	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	return 0;
}

/*
	
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_num; // X
	const int g_num(0); // O

	// 다른 곳 어디선가는 g_z를 초기화 해줬어야 함
	extern int g_z;
	extern const int g_z;

	int g_y(1);
	static int g_y(1); // 외부에서 접근 불가
	const int g_y(1);

	extern int g_w(1); // 한 번 초기화 하면 다른 곳에서 초기화를 더 하면 안됨
	extern const int g_w(1); // 외부 (다른 cpp 파일)에서 접근 가능
*/