// Examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>

int counter = 0;

struct Obiekt
{
	
	int ID;
	Obiekt() : ID(counter++)
	{
		std::cout << "Obiekt "<< ID <<" stworzony" << std::endl;
	}
	~Obiekt()
	{
		std::cout << "Obiekt " << ID <<" zostal usuniety" << std::endl;
	}
	
	void DoSome()
	{
		std::cout << "Funkcja dziala" << std::endl;
	}
};

void Example1 ()
{
	std::cout << "Example 1" << std::endl;
	std::shared_ptr <int> p1{ new int {100} };
	std::cout << *p1 << std::endl;
	std::cout << p1.use_count() << std::endl;


	*p1 = 200;
	std::cout << *p1 << std::endl;
	std::shared_ptr <int> p2{ p1 }; //can we do it? 
	std::cout << p1.use_count() << std::endl;

	p1.reset();
	std::cout << p1.use_count() << std::endl;
	std::cout << p2.use_count() << std::endl;
	std::cout << std::endl;
} //automatically deleted
void Example2()
{
	std::cout << "Example 2" << std::endl;
	std::vector <std::shared_ptr <int>> vec;
	std::shared_ptr <int> ptr{ new int {100} };
	vec.push_back(ptr); //can we do it?
	std::cout << ptr.use_count() << std::endl; 
	std::cout << std::endl;
} //automatically deleted 
void Example3()
{
	std::cout << "Example 3" << std::endl;
	std::shared_ptr<int> p1 = std::make_shared<int>(100);
	std::shared_ptr <int> p2{ p1 };
	std::shared_ptr <int> p3;
	p3 = p1;
	std::cout << p1.use_count() << std::endl;
	std::cout << std::endl;
}//automatically deleted 

void Example4()
{
	std::cout << "Example 4" << std::endl;
	std::unique_ptr<int> up1(new int);
	*up1 = 732;
	std::cout << up1 << std::endl; //adres
	std::cout << up1.get() << std::endl;
	std::cout <<"wartosc : " << *up1 << std::endl; //wartosc
	up1.release();
	std::cout <<"adres po release : " << up1.get() << std::endl;

	std::unique_ptr<Obiekt> uP2(new Obiekt);
	if (1)
	{
		std::cout << "TUTAJ KLAMRA OTWIERAJACA" << std::endl;
		std::unique_ptr<Obiekt> uP2(new Obiekt);
	}
	std::cout << "wyjscie z if ale nadal jestesmy w Example 4" << std::endl;
}

void Example5()
{
	std::cout << "Example 5" << std::endl;
	auto obiekt = std::make_unique<Obiekt>(); //mozna tez tak tworzyc unique pointer 
	obiekt->DoSome(); //funkcje wywolujemy normalnie
	//std::unique_ptr<Obiekt> obiekt2 = obiekt; //tak NIE ROBIMY
}
void Example6()
{
	std::cout << "Example 6" << std::endl;
	auto pointerA = std::make_unique<Obiekt>(); 
	std::cout << "Adres wsakznika A : " << pointerA.get() << std::endl;
	auto pointerB = std::move(pointerA); 
	std::cout << "Adres wsakznika A po std::move : " << pointerA.get() << std::endl;
	std::cout << "Adres wsakznika B po std::move : " << pointerB.get() << std::endl;
}


int main()
{
	Example1();
	Example2(); 
	Example3();
	Example4();
	Example6();
	_CrtDumpMemoryLeaks();
	
	return 0;
}  

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
