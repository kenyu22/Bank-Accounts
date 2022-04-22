#ifndef KENNY_YU_ACCOUNT_H
#define KENNY_YU_ACCOUNT_H

class Account {
public:
    Account(double);
    void credit(double);
    bool debit(double);
    double getBalance() const;
protected:
    double balance;
};
#endif
