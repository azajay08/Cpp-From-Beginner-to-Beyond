#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Savings_Account {name, balance, int_rate}, num_withdrawals {0} {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_threshold)
		amount += bonus_amount;
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (num_withdrawals >= max_withdrawals || amount < (balance * withdrawal_percent))
		return false;
	else {
		++num_withdrawals;
		return Savings_Account::withdraw(amount);
	}
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
	os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate 
		<< "%, withdrawals: " << account.num_withdrawals <<  "]";
	return os;
}

//2. Add a Trust account class to the Account hierarchy
//
//    A Trust account has a name, a balance, and an interest rate
//
//    The Trust account deposit works just like a savings account deposit.
//
//    However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
//
//    
//
//    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
//
//    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)