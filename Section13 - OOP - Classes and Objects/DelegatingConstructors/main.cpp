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
    :Player{"None", 0, 0} {
    cout << "No-args constructor" << endl;
};

Player::Player(const string &_name)
    :Player{_name, 0, 0} {
    cout << "One-arg constructor" << endl;
};

Player::Player(const string &_name, const int &_health, const int &_xp)
    : name{_name}, health{_health}, xp{_xp} {
    cout << "Three-args constructor" << endl;
};

int main() {

    Player empty;
    Player frank{"Frank"};
    Player villain {"Villain", 100, 55};

    return 0;
}
