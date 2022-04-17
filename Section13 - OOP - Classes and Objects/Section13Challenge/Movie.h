//
// Created by chris on 4/17/2022.
//

#ifndef SECTION13CHALLENGE_MOVIE_H
#define SECTION13CHALLENGE_MOVIE_H

#include <string>
#include <iostream>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;

public:
    std::string getName () const;
    std::string getRating () const;
    void incrementWatched();
    void display () const;

    Movie(std::string _name, std::string _rating, int _watched=0);
};


#endif //SECTION13CHALLENGE_MOVIE_H
