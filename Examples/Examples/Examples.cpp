// Examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>
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
int main()
{
	Example1();
	Example2(); 
	Example3();
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
