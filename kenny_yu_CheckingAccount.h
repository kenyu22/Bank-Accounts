#ifndef KENNY_YU_CHECKINGACCOUNT_H
#define KENNY_YU_CHECKINGACCOUNT_H
#include "kenny_yu_Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double, double);
    void credit(double);
    bool debit(double);
private:
    double fee;
};
#endif
