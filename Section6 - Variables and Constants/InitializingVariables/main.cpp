#include <iostream>

using namespace std;

int global_variable {50};

int main() {

    // variable initialization

    // Assignment operator initialization
    int age;
    age = 27;

    // C-like initialization
    int age2 = 27;

    // Constructor initialization
    int age3 (27);

    // C++11 list initialization syntax
    int age4 {27};



    // Program to calculate the area of a room in square feet

    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room:";
    cin >> room_width;

    cout << "Enter the length of the room:";
    cin >> room_length;

    cout << "The area of the room is: " << room_length * room_width << " square feet" << endl;
}
