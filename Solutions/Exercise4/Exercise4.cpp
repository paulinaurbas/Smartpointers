// Exercise4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <string>

class Person
{
	std::string Name;
	std::weak_ptr<Person> p_Partner; //tutaj stosujemy weak zamiast share 

public:

	Person(const std::string &name) : Name(name)
	{
		std::cout << Name << " created " << std::endl;
	}
	~Person()
	{
		std::cout << Name << " died :( " << std::endl;
	}


	friend bool Love(std::shared_ptr<Person> &P1, std::shared_ptr<Person> &P2)
	{
		if (!P1 || !P2)
		{
			std::cout << " Love impossible :( ";
			return false;
		}
		else
		{
			P1->p_Partner = P2;
			P2->p_Partner = P1;
			std::cout << P1->Name << " loves " << P2->Name << std::endl;
			std::cout << P2->Name << " loves " << P1->Name << std::endl;
			return true;
		}
	}
};


int main()
{
	auto shrek = std::make_shared<Person>("Shrek");
	auto fiona = std::make_shared<Person>("Fiona");

	Love(shrek, fiona);

	return 0;
}

