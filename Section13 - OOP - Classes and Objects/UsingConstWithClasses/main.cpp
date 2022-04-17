#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string getName() const {
        return name;
    }
    void setName(string _name) {
        name = _name;
    }
    Player();
    Player(string _name);
    Player(string _name, int _health, int _xp);
};

Player::Player()
    :Player{"None", 0, 0} {};

Player::Player(string _name)
    :Player{_name, 0, 0} {};

Player::Player(string _name, int _health, int _xp)
    :name{_name}, health{_health}, xp{_xp} {};

void displayPlayerName(const Player &p) {
    cout << p.getName() << endl;
}

int main() {

    const Player villain {"Villain", 100, 55};
    Player hero{"Hero", 100, 15};

//    villain.setName("Super Villain"); won't compile because villain is const object
//    cout << villain.getName() << endl; won't compile unless getName is changed to a const method
//    cout << hero.getName() << endl; will compile because player is _not_ a const object

//    displayPlayerName(villain);   this won't compile until the getName method is set to const
//    displayPlayerName(hero);   this won't compile until the getName method is set to const


    return 0;
}
