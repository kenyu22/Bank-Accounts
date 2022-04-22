#include "kenny_yu_SavingsAccount.h"

// (7) the initBal passed through the SavingsAccount object is passed through
//     the Account constructor to initialize balance to initBal.
//     interestRate only applies to SavingsAccount, therefore we initialize
//     the interestRate to rate (percentage) - the double value passed in main
SavingsAccount::SavingsAccount(double initBal, double rate) :
    Account(initBal) {
        this->interestRate = rate;
}

// (8) calculateInterest function returns a double value calculated by
//     multiplying the percentage of interestRate as a decimal value by
//     the current balance of the object
double SavingsAccount::calculateInterest() {
    return interestRate * getBalance();
}

