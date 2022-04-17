#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {

    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};


    // methods
    void talk(string);
    bool isDead();
};

class Account {

    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};



int main()
{

    Account frankAccount;
    Account jimAccount;

    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector<Player> playerVec{frank};
    playerVec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
