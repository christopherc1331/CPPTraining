//
// Created by chris on 4/17/2022.
//

#include "Movie.h"

std::string Movie::getName() const {
    return name;
}
std::string Movie::getRating() const {
    return rating;
}
void Movie::incrementWatched() {
    watched += 1;
}
void Movie::display() const {
    std::cout << name << ": " << watched << std::endl;
}

Movie::Movie(std::string _name, std::string _rating, int _watched)
        : name{_name}, rating{_rating}, watched{_watched} {};

