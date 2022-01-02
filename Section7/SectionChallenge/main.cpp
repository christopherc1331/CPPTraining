#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1 first element: " << vector1.at(0) << endl;
    cout << "vector1 second element: " << vector1.at(1) << endl;
    cout << "vector1 has " << vector1.size() << " elements." << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector2 first element: " << vector2.at(0) << endl;
    cout << "vector2 second element: " << vector2.at(1) << endl;
    cout << "vector2 has " << vector2.size() << " elements." << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d first vector:" << endl;
    cout << "First element: " << vector_2d.at(0).at(0) << endl;
    cout << "Second element: " << vector_2d.at(0).at(1) << endl;
    cout << "vector_2d second vector:" << endl;
    cout << "First element: " << vector_2d.at(1).at(0) << endl;
    cout << "Second element: " << vector_2d.at(1).at(1) << endl;

    cout << "Changing index 0 value in vector1 to 1,000" << endl;
    vector1.at(0) = 1000;

    // changing an element in vector1 that was pushed to vector_2d
    // doesn't affect the vector_2d elements
    // because when you push_back to vector_2d you're passing by value, NOT by reference
    cout << "vector_2d first vector:" << endl;
    cout << "First element: " << vector_2d.at(0).at(0) << endl;
    cout << "Second element: " << vector_2d.at(0).at(1) << endl;
    cout << "vector_2d second vector:" << endl;
    cout << "First element: " << vector_2d.at(1).at(0) << endl;
    cout << "Second element: " << vector_2d.at(1).at(1) << endl;

    // now when you look at the elements in vector1, you will see the updated 1,00
    cout << "vector1 first element: " << vector1.at(0) << endl;
    cout << "vector1 second element: " << vector1.at(1) << endl;
    cout << "vector1 has " << vector1.size() << " elements." << endl;

    return 0;
}
