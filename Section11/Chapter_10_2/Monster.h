#pragma once

#include <string>
//#include <iostream>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name; // char * data, unsigned length
	//location
	/*int m_x;
	int m_y;*/
	Position2D m_location;

public:
	/*Monster(const std::string name_in, const int& x_in, const int& y_in) : m_name(name_in), m_x(x_in), m_y(y_in)*/
	Monster(const std::string name_in, const Position2D& pos_in) : m_name(name_in), m_location(pos_in)
	{

	}

	/*void MoveTo(const int& x_target, const int& y_target)*/
	void MoveTo(const Position2D& pos_target)
	{
		/*m_x = x_target;
		m_y = y_target;*/
		m_location.set(pos_target);
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{

		/*out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;*/
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};