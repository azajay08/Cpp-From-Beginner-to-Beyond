#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	: Account {name, balance} {
}

bool Checking_Account::withdraw(double amount) {
	amount += withdrawal_fee;
	return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
	os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
	return os;
}

//
//1. Add a Checking account class to the Account hierarchy
//
//    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
//
//    Every withdrawal transaction will be assessed this flat fee.