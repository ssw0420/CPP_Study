#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Friend: name, address, age, height, weight, ...

struct Friend
{
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

// Object : Data & Function
// Friend:	name, address, age, height, weight, ...
//			print()

class FriendTest
{
public: // access specifier (public, private, protected)
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

void print(const string& name, const string& address, const int& age, const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

void print(const Friend& fr)
{
	cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
}

int main()
{
	/*string	name;
	string	address;
	int		age;
	double	height;
	double	weight;*/

	//print(name, address, age, height, weight);

	Friend aa;
	aa.name = "Apple";
	aa.address = "Uptown";
	aa.age = 2;
	// ...

	// Friend Jack;
	Friend Jack{ "Jack Jack", "Uptown", 2, 30, 10 };

	print(Jack.name, Jack.address, Jack.age, Jack.height, Jack.weight);

	Jack.print();

	vector<string>	name_vec;
	vector<string>	addr_vec;
	vector<int>		age_vec;
	vector<double>	height_vec;
	vector<double>	weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	// Instance : Jack
	FriendTest JackTest{ "Jack Jack", "Uptown", 2, 30, 10 }; // Instanciation

	vector<FriendTest> my_friends;
	my_friends.resize(2);

	my_friends[0].print();
	my_friends[1].print();

	for (auto& ele : my_friends)
		ele.print();

	return 0;
}