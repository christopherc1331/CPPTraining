#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:

    // attributes
    string name;
    int health;
    int xp;


    // methods
    void talk(const string& textToSay) const {
        cout << name << " says " << textToSay << endl;
    };

    bool isDead();
};

class Account {
public:

    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double newDep) {
        balance += newDep;
        cout << "In deposit" << endl;
    };
    bool withdraw(double newWithdraw) {
        balance -= newWithdraw;
        cout << "In withdraw" << endl;
    };
};



int main()
{
    Account frankAccount;
    frankAccount.name = "Frank's account";
    frankAccount.balance = 5000.0;

    frankAccount.deposit(1000.0);
    frankAccount.withdraw(500.0);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;
    enemy -> talk("I will destroy you!");


    return 0;
}
