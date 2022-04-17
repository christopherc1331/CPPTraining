#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    void setName(string const& _name) {
        name = _name;
    }

    string getName() {
        return name;
    }

    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }

    Player(string const& _name, int const& _health, int const& _xp) {
        name = _name;
        health = _health;
        xp = _xp;
    }
};

int main() {

    Player hero;
    cout << hero.getName() << endl;

    Player frank {"Frank", 100, 13};
    cout << frank.getName() << endl;

    return 0;
}
