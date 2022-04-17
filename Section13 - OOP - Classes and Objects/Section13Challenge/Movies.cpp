//
// Created by chris on 4/17/2022.
//

#include "Movies.h"

void Movies::addMovie(std::string name, std::string rating, int watched) {
    for (Movie &movie : moviesVector) {
        if (movie.getName() == name) {
            throw std::runtime_error{"Movie already exists"};
        }
    }

    Movie newMovie = Movie{name, rating, watched};
    moviesVector.push_back(newMovie);
}

void Movies::watchMovie(std::string name) {
    for (Movie &movie : moviesVector) {
        if (movie.getName() == name) {
            movie.incrementWatched();
            return;
        }
    }
    throw std::runtime_error{"Movie not found in movie list"};
}

void Movies::displayAllMovies() {
    std::cout << "       Movies      " << std::endl;
    std::cout << "===================" << std::endl;
    for (Movie const &movie : moviesVector) {
        movie.display();
    }
    std::cout << "===================" << std::endl << std::endl;
}


