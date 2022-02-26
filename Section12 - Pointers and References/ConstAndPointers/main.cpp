#include <iostream>
using namespace std;

int main()
{
    int highScore{100};
    int lowScore{65};

    // value at pointer memory address can't be reassigned
    const int *scorePtr{&highScore};

//    *scorePtr = 86; // ERROR
    scorePtr = &lowScore; // OK

    // pointer is constant and can't be reassigned
    int *const scorePtr2{&highScore};

    *scorePtr2 = 86; // OK
//    scorePtr2 = &lowScore; // ERROR


    const int *const scorePtr3{&highScore};

//    scorePtr3 = 86; // ERROR
//    scorePtr3 = &lowScore; // ERROR


    return 0;
}
