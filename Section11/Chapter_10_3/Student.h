#pragma once

#include <iostream>
#include <string>

class Student
{
private:
	std::string m_name;
	int m_intelligence;

	//TODO: add more members like address, phone, favorate food, habits, ...

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0) : m_name(name_in), m_intelligence(intel_in)
	{

	}

	void SetName(const std::string& name_in)
	{
		m_name = name_in;
	}

	void SetIntel(const int& intel_in)
	{
		m_intelligence = intel_in;
	}

	int GetIntel()
	{
		return m_intelligence;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << student.m_name << " " << student.m_intelligence;
		return out;
	}

};
