#include "pch.h"
#include "InvestmentSavingAccount.h"

InvestmentAccount::InvestmentAccount(std::string name, double balanace, double IntRate, int WithDrawNum) : SavingsAccount{ name, balanace, IntRate }, WithDrawNum{ WithDrawNum }
{

}
//Jesli wartosc na koncie oszczednosciowym jest wieksza od 2000 wtedy dodajemy bonus 200 zl 
bool InvestmentAccount::Deposit(double amount)
{
	if (amount >= 2000)
	{
		amount += 20;
	}
	return SavingsAccount::Deposit(amount);
}
//mozliwe sa jedynie trzy wyplaty z tego konta, kazda moze wynosic maksymalnie 20% wartosci konta
bool InvestmentAccount::Withdraw(double amount)
{
	if (this->WithDrawNum >= 3 || amount > this->balance * 0.2)
	{
		return false;
	}
	else
	{
		++WithDrawNum;
		return SavingsAccount::Withdraw(amount);
	}
}
void InvestmentAccount::Print(std::ostream & os)  const
{
	os.precision(2);
	os << std::fixed;
	os << "[Investment Account: " << this->name << ": " << this->balance << ", " << IntRate << " %, with draw number" << WithDrawNum << "]"; 
}