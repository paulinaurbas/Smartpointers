#pragma once
#include "SavingsAccont.h"
class InvestmentAccount : public SavingsAccount
{
private:
	int WithDrawNum;
public:
	InvestmentAccount(std::string name, double balanace, double IntRate, int WithDrawNum);
	~InvestmentAccount() = default;
	bool Deposit(double amount);
	bool Withdraw(double amount);
	virtual void Print(std::ostream &os) const override;
};