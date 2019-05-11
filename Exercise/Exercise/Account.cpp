#include "pch.h"
#include "Account.h"

Account::Account(std::string name, double balance) :name{ name }, balance{balance}
{

}
Account::~Account()
{

}
bool Account::Deposit(double amount)
{
	if (amount < 0)
	{
		return false;
	}
	else
	{
		balance += amount;
		return true;
	}

}

bool Account::Withdraw(double amount)
{
	if (this->balance - amount >= 0)
	{
		this->balance -= amount;
		return true;
	}
	else
	{
		return false;
	}
}
void Account::Print(std::ostream & os)  const
{
	os.precision(2);
	os << std::fixed;
	os << "[Account: " << this->name << ": " << this->balance << "]";
}