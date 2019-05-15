// Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Account.h"
#include "AccountsVector.h"
#include "InvestmentSavingAccount.h"
#include "SavingsAccont.h"
#include "IPrint.h"
int main()
{
	std::cout << "\n Accounts" << std::endl;
	//2.1 stworz sharepointery dla 3 rodzajow kont 
	//2.2 stworz vector sharedpointerow 
	//2.3 dodaj kazdy z sharedpoinerow do tego vectora
	/*
	for (const auto &acc : accounts) {
		std::cout << *acc << std::endl;
		std::cout << "Use count: " << acc.use_count() << std::endl;
	}
	*/
	std::cout << std::endl;

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
