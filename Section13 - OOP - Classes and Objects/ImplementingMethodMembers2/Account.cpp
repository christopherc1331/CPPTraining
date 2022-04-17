//
// Created by chris on 3/21/2022.
//

#include "Account.h"

void Account::setName(std::string n) {
    name = n;
}

std::string Account::getName() {
    return name;
}

bool Account::deposit(double amt) {
    balance += amt;
    return true;
}

bool Account::withdraw(double amt) {
    if (balance - amt >= 0) {
        balance -= amt;
        return true;
    }
    else {
        return false;
    }
}