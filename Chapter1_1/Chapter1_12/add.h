//#pragma once

#ifndef MY_ADD // 1) MY_ADD가 정의 안 되어 있으면
#define MY_ADD // 2) 여기서 MY_ADD를 정의
int add(int a, int b)
{
	return a + b;
}
#endif // 3) 조건부 영역 끝