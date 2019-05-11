#pragma once
#include <iostream>
#include <string>
#include "Account.h"
class SavingsAccount : public Account
{
protected:
	double IntRate;
public:
	SavingsAccount(std::string name, double balanace, double IntRate);
	~SavingsAccount() = default;
	bool Deposit(double amount);
	bool Withdraw(double amount);
	virtual void Print(std::ostream &os) const override;

};