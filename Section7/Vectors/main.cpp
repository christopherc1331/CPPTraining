#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // if initialize value not specified; will be initialized to 0
    // vector <char> vowels (5);
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    // vector <int> test_scores (10);
    vector<int> test_scores{100, 98, 89, 85, 93};

    // first value in params is vector size
    // second value is initial value to be assigned to all indexes
    vector<double> hi_temperatures (365, 80.0);


    // access vector elements WITH type checking
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 4: " << test_scores.at(4) << endl;

    // input stream to vector element assignment
    cout << "Enter 5 scores separated by spaces:";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    cin >> test_scores.at(3);
    cin >> test_scores.at(4);
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    // vector element inline assignment statement
    cout << "Reassigning element at index 0 to 90" << endl;
    test_scores.at(0) = 90;

    cout << "\nEnter a test score to add to the vector:";
    int score_to_add{0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << test_scores.at(5) << endl;

    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;


    // example of a 2D-vector
    vector<vector<int>> movie_ratings
            {
                    {1, 2, 3, 4},
                    {1, 2, 4, 4},
                    {1, 3, 4, 5}
            };

    // array syntax element access
    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    // vector method syntax element access
    cout << "\nHere are the movie rating for reviewer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;



    return 0;
}
