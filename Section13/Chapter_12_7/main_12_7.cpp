#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{
	}

	string GetName() { return m_name; }

	virtual void speak() const = 0; // pure virtual function

	/*virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}*/

};

void Animal::speak() const // the body of the pure virtual function
{
	cout << m_name << "???" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{
	}

	void speak() const
	{
		Animal::speak();
		cout << m_name << " Meow " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{
	}

	void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{
	}
};

class IErrorLog
{
public:
	virtual bool reportError(const char* errorMessage) = 0;

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void DoSomething(IErrorLog& log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	// Animal animal("Hi"); // cannot instantiate abstract class
	// Cow cow("Hello"); // error C2259: cannot instantiate abstract class
	Cat cat("HELLO ");
	cat.speak();

	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	DoSomething(file_log);
	DoSomething(console_log);

	return 0;
}