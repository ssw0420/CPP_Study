#pragma once

#include <iostream>
#include <string>

class Person
{
private:
	std::string m_name;

public:
	/*Person()
		: m_name("No Name")
	{

	}*/

	Person(const std::string& name_in = "No Name")
		: m_name(name_in)
	{

	}

	void SetName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string GetName() const
	{
		return m_name;
	}

	void DoNothing() const
	{
		std::cout << m_name << "is doing nothing" << std::endl;
	}
};