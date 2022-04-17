//
// Created by chris on 4/17/2022.
//

#ifndef STATICCLASSMEMBERS_PLAYER_H
#define STATICCLASSMEMBERS_PLAYER_H

#include <string>

class Player {
private:
    static int numPlayers;
    std::string name;
    int health;
    int xp;
public:
    std::string getName();
    int getHealth() const;
    int getXp() const;
    static int getNumPlayers();

    Player(std::string _name="None", int _health=0, int _xp= 0);
    Player(const Player &source);
    ~Player();
};


#endif //STATICCLASSMEMBERS_PLAYER_H
