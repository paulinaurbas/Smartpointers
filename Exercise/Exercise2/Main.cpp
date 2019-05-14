// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>
class Point {
private:
	int x;
	int y;
public:
	Point() : x{ 0 }, y{0}
	{ 
		std::cout << "Constructor (" << x << ")"<< "(" << y << ")" << std::endl; 
	}
	
	Point(int x, int y) : x{ x }, y{y}
	{
		std::cout << "Constructor (" << x << ")" << "(" << y << ")" << std::endl;
	}
	int GetX() const
	{ 
		return x; 
	}
	int GetY() const
	{
		return y;
	}
	~Point() 
	{ 
		std::cout << "Test destructor (" << x << ")" << "(" << y << ")" << std::endl;
	}

};
auto make() {
	return std::make_unique<std::vector<std::shared_ptr<Point>>>();
}

void fill(std::vector<std::shared_ptr<Point>> &vec, int num) {
	int temp;
	int temp2;
	for (int i = 1; i <= num; ++i) {
		std::cout << "Enter data point x [" << i << "] : ";
		std::cin >> temp;
		std::cout << "Enter data point y [" << i << "] : ";
		std::cin >> temp2;
		//        std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
		//        vec.push_back(ptr);
		vec.push_back(std::make_shared<Point>(temp, temp2));

	}
}

void display(const std::vector<std::shared_ptr<Point>>&vec) {
	std::cout << "\nDisplaying vector data" << std::endl;
	for (auto &ptr : vec)
	{
		std::cout << ptr->GetX() << "\t"<< ptr->GetY() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
 std::unique_ptr<std::vector<std::shared_ptr<Point>>> vec_ptr;
	vec_ptr = make();
	std::cout << "How many data points do you want to enter: ";
	int num;
	std::cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	
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
