#include <iostream>

using namespace std;

class Mother
{
//protected:
private:
	int m_i;

public:
	Mother()
		: m_i(0)
	{

	}

	Mother(const int& i_in)
		: m_i(i_in)
	{
		std::cout << "Mother Constructor" << std::endl;
	}

	void SetValue(const int& i_in)
	{
		m_i = i_in;
	}

	int GetValue()
	{
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in) : Mother(i_in), m_d(d_in)
	//	: m_i(i_in), m_d(d_in)
	{
		/*Mother::SetValue(i_in);
		m_d = d_in;*/
	}

	void SetValue(const int & i_in, const double& d_in)
	{
		Mother::SetValue(i_in);
		m_d = d_in;
	}

	double GetValue()
	{
		return m_d;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};

int main(void)
{
	Mother mother;
	mother.SetValue(1024);
	cout << mother.GetValue() << endl;

	Child child(1024, 128);
	/*child.Mother::SetValue(1024);
	child.SetValue(128);*/
	cout << child.Mother::GetValue() << endl;
	cout << child.GetValue() << endl;

	return 0;
}