#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    Player(string const &_name = "None", int const &_health = 0, int const &_xp = 0);
};

Player::Player(const string &_name, const int &_health, const int &_xp)
    :name{_name}, health{_health}, xp{_xp} {
    cout << "Three-args constructor" << endl;
}


int main() {

    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};


    return 0;
}
