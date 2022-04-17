//
// Created by chris on 4/17/2022.
//

#ifndef SECTION13CHALLENGE_MOVIES_H
#define SECTION13CHALLENGE_MOVIES_H

#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> moviesVector {};

public:
    void addMovie(std::string name, std::string rating, int watched);
    void watchMovie(std::string name);
    void displayAllMovies();
};


#endif //SECTION13CHALLENGE_MOVIES_H
