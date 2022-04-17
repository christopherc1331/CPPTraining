#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    int getXp() {
        return xp;
    }
    explicit Player(string _name = "None", int _health = 0, int _xp = 0);
    Player(const Player &source);
    ~Player() {
        cout << "Destructor called for: " << name << endl;
    }
};

Player::Player(string _name, int _health, int _xp)
    :name{_name}, health{_health}, xp{_xp} {};

Player::Player(const Player &source)
//    :name{source.name}, health{source.health}, xp{source.xp} {
    :Player{source.name, source.health, source.xp} {
    cout << "Copy constructor - made copy of: " << source.name << endl;
}

void displayPlayer(Player p) {
    cout << "Name: " << p.getName() << endl;
    cout << "Health: " << p.getHealth() << endl;
    cout << "XP: " << p.getXp() << endl;
}

int main() {

    Player empty{"XXXXXXX", 100, 50};

    Player myNewObject{empty};

    displayPlayer(empty);

    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    return 0;
}
