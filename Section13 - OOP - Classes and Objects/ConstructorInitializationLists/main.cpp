#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    Player();

    Player(string const &_name);

    Player(string const &_name, int const &_health, int const &_xp);
};

Player::Player()
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(const string &_name)
    : name{_name}, health{0}, xp{0} {
}

Player::Player(const string &_name, const int &_health, const int &_xp)
    : name{_name}, health{_health}, xp{_xp} {
}


int main() {

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}
