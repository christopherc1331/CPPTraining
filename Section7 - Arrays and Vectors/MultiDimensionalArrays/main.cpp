#include <iostream>

using namespace std;

int main()
{

    const int rows{3};
    const int cols{4};

    // initializing multidimensional array
    int movie_rating[rows][cols]
            {
                    {0, 4, 3, 5},
                    {2, 3, 3, 5},
                    {1, 4, 4, 5}
            };


    return 0;
}
