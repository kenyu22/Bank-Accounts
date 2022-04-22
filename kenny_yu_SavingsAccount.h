#ifndef KENNY_YU_SAVINGSACCOUNT_H
#define KENNY_YU_SAVINGSACCOUNT_H
#include "kenny_yu_Account.h"

class SavingsAccount : public Account{
public:
    SavingsAccount(double, double);
    double calculateInterest();
private:
    double interestRate;
};
#endif
