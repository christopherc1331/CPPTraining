#include <iostream>
#include "Movies.h"
using namespace std;

int main() {

    Movies myMovies;

    myMovies.displayAllMovies();

    myMovies.addMovie("Big", "PG-13", 2);
    myMovies.addMovie("Star Wars", "PG", 5);
    myMovies.addMovie("Cinderella", "PG", 7);

    myMovies.displayAllMovies();

//    myMovies.addMovie("Cinderella", "PG", 7); // Already exists; should throw error
    myMovies.addMovie("Ice Age", "PG", 12);

    myMovies.displayAllMovies();

    myMovies.watchMovie("Big");
    myMovies.watchMovie("Ice Age");

    myMovies.displayAllMovies(); // Big and Ice Age watched count incremented by 1

//    myMovies.watchMovie("XXXX"); // XXXX will throw runtime error

    return 0;
}
