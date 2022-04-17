#include <iostream>
#include "Account.h"
using namespace std;

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
