#include <iostream>
#include "kenny_yu_Account.h"
using std::cout, std::string;

// (1) Constructor checks to ensure that the initial balance is >= 0.0, and if it
//     is, the balance is initialized to initBal. Otherwise, print invalid balance
Account::Account(double initBal) {
    if (initBal >= 0.0)
        balance = initBal;
    else
        cout << ("Initial balance is invalid.");
}

// (2) credit function is a deposit entered from main to put IN to the desired
//     account
void Account::credit(double deposit) {
    balance += deposit;
}

// (3) debit function is a withdrawl entered from main to take OUT of the desired
//     account
bool Account::debit(double withdraw) {
    
    // (4) Additionally, it checks to see if the amount to withdraw is greater
    //     than the balance of the account. If it is, a error message is printed
    //     the function returns false (to show withdrawal unsuccessful)
    if (withdraw > balance) {
        cout << "Debit amount exceeded account balance.\n";
        return false;
    }
    // (5) As long as the withdraw amount is equal to or less than the balance
    //     in the account, balance is now initialized to the balance - amount to
    //     withdraw, and the function returns true (to show withdrawal successful)
    else {
        balance -= withdraw;
        return true;
    }
}
// (6) getBalance function returns the balance of the account
double Account::getBalance() const {
    return balance;
}
