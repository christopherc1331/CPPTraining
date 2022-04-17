//
// Created by chris on 4/17/2022.
//

#include "Player.h"

int Player::numPlayers {0};

Player::Player(std::string _name, int _health, int _xp)
    : name{_name}, health{_health}, xp{_xp} {
    numPlayers++;
};

Player::Player(const Player &source)
    :Player{source.name, source.health, source.xp} {};

Player::~Player() {
    numPlayers--;
};

int Player::getNumPlayers() {
    return numPlayers;
}

std::string Player::getName() {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getXp() const {
    return xp;
}