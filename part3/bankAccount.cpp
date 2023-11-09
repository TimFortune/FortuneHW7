#include "bankAccount.h"


BankAccount::BankAccount(string n, float bal) {
    this->customerName = n;
    this->balance = bal;
}

void BankAccount::setName(string n) {		//	Name set
    customerName = n;
}

void BankAccount::setBalance(float bal) {	//	Balance set
    balance = bal;
}

string BankAccount::getName() {		
    return customerName;
}

float BankAccount::getBalance() {
    return balance;
}

void BankAccount::withdraw(float draw) {	// Withdraw
    balance -= draw;
}

void BankAccount::deposit(float dep) {		//	Balance
    balance += dep;
}


BankAccount::~BankAccount() {
   cout << "destroying " << customerName << "'s bank account" << endl;
}



