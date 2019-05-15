#include "pch.h"
#include "SavingsAccont.h"
SavingsAccount::SavingsAccount(std::string name, double balance, double IntRate) :Account{ name, balance }, IntRate{ IntRate }
{

}
SavingsAccount::~SavingsAccount()
{
	std::cout << "Savings Account destructor" << std::endl;
}
bool SavingsAccount::Deposit(double amount)
{
	amount += amount * (IntRate / 100);
	return Account::Deposit(amount);
}
bool SavingsAccount::Withdraw(double amount)
{
	return Account::Withdraw(amount);
}
void SavingsAccount::Print(std::ostream & os)  const
{
	os.precision(2);
	os << std::fixed;
	os << "[SavingAccount: " << this->name << ": " << this->balance << ", " << this->IntRate << "]";
}