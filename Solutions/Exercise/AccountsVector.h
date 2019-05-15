#pragma once
#include <vector>
#include <string>
#include "Account.h"

void Display(const std::vector<Account *> &accounts);
void Deposit(std::vector<Account *> &accounts, double amount);
void Withdraw(std::vector<Account *> &accounts, double amount);