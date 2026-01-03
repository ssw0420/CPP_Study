#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class PublicDervied : public Base
{
public:
	PublicDervied()
	{
		m_public = 123;
		m_protected = 123;
		// m_private = 123; // cannot access private member declared in class
	}
};

class ProtectedDerived : protected Base
{
public:
	ProtectedDerived()
	{
		Base::m_public; // this-> m_public;
		Base::m_protected;
		// Base::m_private;
	}
};

class PrivateDerived : private Base
{
public:
	PrivateDerived()
	{
		Base::m_public;
		Base::m_protected;
		// Base::m_private;
	}
};

class GrandChild : public PrivateDerived
{
public:
	GrandChild()
	{
		//PrivateDerived::m_public;
		//PrivateDerived::m_protected;
		//PrivateDerived::m_private;
	}
};


int main()
{
	Base base;

	base.m_public = 123;
	//base.m_protected = 123; // cannot access protected member declared in class
	//base.m_private = 123; // cannot access private member declared in class

	PublicDervied publicDervied;
	publicDervied.m_public = 123;
	//publicDervied.m_proteced = 123;
	//publicDervied.m_private = 123;

	ProtectedDerived protectedDerived;
	//protectedDerived.m_public = 123;
	//protectedDerived.m_protected = 123;
	//protectedDerived.m_private = 123;

	PrivateDerived privateDervied;
	//privateDervied.m_public = 123;
	//privateDervied.m_protected = 123;
	//privateDervied.m_private = 123;

	return 0;
}