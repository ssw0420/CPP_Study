#include <iostream>
#include <vector>
#include <algorithm> // std::min

using namespace std;

class Examples
{
public:

	void ex1()
	{
		std::vector<int> vec;
		for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
			cout << *itr;

		for (auto itr = vec.begin(); itr != vec.end(); itr++)
			cout << *itr;

		for (auto itr : vec) // for(const auto & itr : vec)
			cout << itr;
	}


	void ex2()
	{
		int x = int();

		auto auto_x = x;

		const int& crx = x;

		auto auto_crx1 = crx; // auto_crx1 => int

		const auto& auto_crx2 = crx; // auto_crx2 => const int&

		volatile int vx = 1024;

		auto avx = vx;

		volatile auto vavx = vx;
	}

	//template<class T>
	//void func_ex3(T arg)
	//{
	//}
	
	template<class T>
	void func_ex3(const T& arg)
	{
	}

	void ex3()
	{
		const int& crx = 123;

		func_ex3(crx); // => int -> const int&
	}

	void ex4()
	{
		const int c = 0;
		auto& rc = c;

		//rc = 123; // error
	}

	void ex5() // amendment
	{
		int i = 42;
		auto&& ri_1 = i; // l-value

		auto&& ri_2 = 42; // r-value
	}

	void ex6()
	{
		int x = 42;
		const int* p1 = &x;
		auto p2 = p1; // const int*
		// *p2 = 43; // error
	}

	template<typename T, typename S>
	void func_ex7(T lhs, S rhs) // other data type variable's multiple function
	{
		auto prod1 = lhs * rhs;

		//typedef typeof(lhs * rhs) product_type // pre-C++ 11 'some' compilers
		typedef decltype(lhs* rhs) product_type;

		product_type prod2 = lhs * rhs;
		decltype(lhs * rhs) prod3 = lhs * rhs;
	}

	template<typename T, typename S>
	// decltype(lhs * rhs) func_ex8(T lhs, S rhs) => => can NOT
	auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)
	{
		return lhs * rhs;
	}


	void ex7_8()
	{
		func_ex7(1.0, 345);
		func_ex8(1.2, 345);
	}

	struct S
	{
		int m_x;
		
		S()
		{
			m_x = 42;
		}
	};

	void ex9()
	{
		int x;
		const int cx = 42;
		const int& crx = x;
		const S* p = new S(); // const

		auto a = x;
		auto b = cx;
		auto c = crx;
		auto d = p;
		auto e = p->m_x; // int <= const value copy

		typedef decltype(x) x_type; // int
		typedef decltype(cx) cx_type; // const int
		typedef decltype(crx) crx_type; // const int&
		typedef decltype(p->m_x) m_x_type; // int <= declared type

		typedef decltype((x)) x_with_parens_type; // add references to  lvalues
		typedef decltype((cx)) cx_with_parens_type;
		typedef decltype ((crx)) crx_with_parens_type;
		typedef decltype ((p->m_x)) m_w_with_parens_type;
	}

	const S foo()
	{
		return S();
	}

	const int& foobar()
	{
		return 123;
	}

	void ex10()
	{
		std::vector<int> vec = { 42, 43 };

		auto a = foo();
		typedef decltype(foo()) foo_type;

		auto b = foobar();
		typedef decltype(foobar()) foobar_type;

		auto itr = vec.begin();
		typedef decltype(vec.begin()) iterator_type;

		auto first_element = vec[0];
		decltype(vec[1]) second_element = vec[1]; // int &
	}

	void ex11()
	{
		int x = 0;
		int y = 0;
		const int cx = 42;
		const int cy = 43;
		double d1 = 3.14;
		double d2 = 2.72;

		typedef decltype(x* y) prod_xy_type;
		auto a = x * y; // int

		typedef decltype(cx* cy) prod_cxcy_type; // result is prvalue
		auto b = cx * cy; // int

		typedef decltype(d1 < d2 ? d1 : d2) cond_type; // result is lvalue. & is added.
		auto c = d1 < d2 ? d1 : d2; // double

		typedef decltype(x < d2 ? x : d2) cond_type_mixed; // promotion of x to double
		auto d = x < d2 ? x : d2; // double

		//auto d = std::min(x, dbl); // type difference. error
	}

	template<typename T, typename S>
	auto fpmin_wrong(T x, S y) -> decltype(x < y ? x : y)
	{
		return x < y ? x : y;
	}

	template<typename T, typename S>
	auto fpmin(T x, S y) -> typename std::remove_reference<decltype(x < y ? x : y)>::type
	{
		return x < y ? x : y;
	}


	void ex12()
	{
		int i = 42;
		double d = 45.1;

		// auto a = std::min(i, d); // error : 'std::min': no matching overloaded function found
		auto a = std::min(static_cast<double>(i), d);

		int& j = i;

		typedef decltype(fpmin_wrong(d, d)) fpmin_return_type1; // double&
		typedef decltype(fpmin_wrong(i, d)) fpmin_return_type2; // double
		typedef decltype(fpmin_wrong(j, d)) fpmin_return_type2; // double
	}

	void ex13()
	{
		std::vector<int> vec; // vec is empty
		typedef decltype(vec[0]) integer_ref;
	}

	template<typename R>
	class SomeFunctor
	{
	public:
		typedef R result_type;

		SomeFunctor()
		{ }

		result_type operator() ()
		{
			return R();
		}
	};

	void ex14()
	{
		SomeFunctor<int> func;
		typedef decltype(func)::result_type integer; // nested type
	}

	void ex15()
	{
		auto lambda = []() {return 42; };
		decltype(lambda) lambda2(lambda);
		decltype((lambda)) lambda3(lambda); // reference

		cout << "Lambda functions" << endl;
		cout << &lambda << " " << &lambda2 << endl; // 00000051026FFA54 00000051026FFA74
		cout << &lambda << " " << &lambda3 << endl; // 00000051026FFA54 00000051026FFA54 => same address
	}

	void ex16()
	{
		//generic lambda
		auto lambda = [](auto x, auto y)
			{
				return x + y;
			};

		cout << lambda(1.1, 2) << " " << lambda(3, 4) << " " << lambda(4.5, 2.2) << endl;
	}
};

int main()
{
	Examples exam;

	exam.ex1();
	exam.ex2();
	exam.ex3();
	exam.ex4();
	exam.ex5();
	exam.ex6();
	exam.ex7_8();
	exam.ex9();
	exam.ex10();
	exam.ex11();
	exam.ex12();
	exam.ex13();
	exam.ex14();
	exam.ex15();


	return 0;
}