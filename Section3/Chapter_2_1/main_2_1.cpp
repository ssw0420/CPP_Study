#include <iostream>

int main(void)
{
	using namespace std;

	bool bValue = false;
	char chValue = 'A';
	chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;
	long double ldValue = 3.141592;
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;
	
	// explicit type casting (명시적 형 변환)
	// narrowing conversion (큰 표현 범위 → 작은 범위)
	// 소수부 손실 발생
	int i = (int)3.141592;
	
	// explicit type casting (명시적 형 변환)
	// widening conversion (작은 표현 범위 → 큰 범위)
	// 데이터 손실 없음
	double d = (double)1;

	int k, l, m; // 같은 데이터 형을 한 번에 정의 가능
	int g, h = 123;
	int f = 456, p;
	int o = 0, u = 1;


	cout << i << endl;
	cout << d << endl;
	cout << aValue << endl;
	cout << aValue2 << endl;

	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	cout << sizeof(ldValue) << endl;
	
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	cout << bValue << endl; // 0
	cout << (bValue ? 1 : 0) << endl; // 삼항연산자 true일 때 1출력, false일 때, 0출력
	cout << boolalpha << bValue << endl; // false 출력
	cout << chValue << endl;
	cout << (int)chValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;

	int a = 123; // copy initialiation
	int b(123); // direct initialiation
	int c{ 123 }; // uniform initialization

	return 0;
}