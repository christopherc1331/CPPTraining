#include <iostream>

using namespace std;


class Player {

private:

    string name;
    int health;
    int xp;

public:

    void talk(const string &textToSay) {
        cout << name << " says " << textToSay << endl;
    }

    bool isDead();
};


int main()
{
    Player frank;
    frank.talk("Hello there");

    return 0;
}
