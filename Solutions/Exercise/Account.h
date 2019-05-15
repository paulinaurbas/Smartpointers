#pragma once
#include <string>
#include <iostream>
#include "IPrint.h"
class Account : public IPrint
{
protected:
	std::string name;
	double balance;
public:
	Account(std::string name, double balance);
	 bool Deposit(double amount);
	 bool Withdraw(double amount); 
	 virtual void Print(std::ostream &os) const override;
	 ~Account() ;

};