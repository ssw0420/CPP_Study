#pragma once

#include "Person.h"

class Student : public Person
{
private:
	int m_intel; // intelligence

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: Person(name_in), m_intel(intel_in)
	{

	}

	void SetIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	int GetIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << GetName() << " is studying" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << student.GetName() << " " << student.m_intel;
		return out;
	}
};