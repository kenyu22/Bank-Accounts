#include <iostream>
#include "kenny_yu_CheckingAccount.h"
using std::cout;

// (9) the initBal passed through the CheckingAccount object is passed through
//     the Account constructor to initialize balance to initBal.
//     fee only applies to CheckingAccount, therefore we initialize
//     the fee (data member) to the fee (the double value passed in main)
CheckingAccount::CheckingAccount(double initBal, double fee) :
    Account(initBal) {
        this->fee = fee;
}

// (10) invokes base class Account version of credit to set balance to the sum of
//      the balance and deposit. However, the balance is updated in this
//      redefined member function in CheckingAccount by subtracting the fee
//      from the balance
void CheckingAccount::credit(double deposit) {
    Account::credit(deposit);
    balance -= fee;
    cout << "$" << fee << " transaction fee charged.\n";
}

// (11) invokes base class Account version of debit to CHECK if the withdrawal
//      is first POSSIBLE, and if it is, isWithdrawn is a local variable that is
//      initialized to the bool value returned in the parent function, and the
//      balance is updated as the difference from subtracting balance - withdraw
bool CheckingAccount::debit(double withdraw) {
    bool isWithdrawn = Account::debit(withdraw);
    
    // (12) if the bool isWithdrawn is true, (returned from base class Account
    //      version of debit), subtract the fee from the balance as well
    //      which is the transaction fee
    if (isWithdrawn == true) {
        balance -= fee;
    cout << "$" << fee << " transaction fee charged.\n";
        return true; // transaction fee successful
    } else
        return false; // transaction fee unsuccessful
}
