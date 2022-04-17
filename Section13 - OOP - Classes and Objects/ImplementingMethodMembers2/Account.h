//
// Created by chris on 3/21/2022.
//

#ifndef IMPLEMENTINGMETHODMEMBERS2_ACCOUNT_H
#define IMPLEMENTINGMETHODMEMBERS2_ACCOUNT_H

#include <string>

class Account {

private:

    std::string name;
    double balance;

public:

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    double getBalance() {
        return balance;
    }

    void setName(std::string n);

    std::string getName();

    bool deposit(double amt);

    bool withdraw(double amt);
};

#endif //IMPLEMENTINGMETHODMEMBERS2_ACCOUNT_H
