#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

class Account {

private:

    string name;
    double balance;

public:

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    double getBalance() {
        return balance;
    }

    void setName(string n);

    string getName();

    bool deposit(double amt);

    bool withdraw(double amt);
};

void Account::setName(string n) {
    name = n;
}

string Account::getName() {
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



int main() {
    Account frankAccount;
    frankAccount.setName("Frank's account");
    frankAccount.setBalance(1000.0);
    if(frankAccount.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    }
    else {
        cout << "Deposit not allowed" << endl;
    }

    if (frankAccount.withdraw(500.0)) {
        cout << "Withdraw OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }

    if (frankAccount.withdraw(1500.0)) {
        cout << "Withdraw OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }

    return 0;
}