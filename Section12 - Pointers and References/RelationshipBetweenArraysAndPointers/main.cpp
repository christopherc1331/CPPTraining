#include <iostream>

using namespace std;

int main()
{
    int scores[]{100, 95, 89};

    cout << scores << endl; // memory address of first int
    cout << *scores << endl << endl;; // 100

    // arrays are just the memory address of the first element of the chunk of memory


    int *scorePtr{scores};

    cout << scorePtr << endl; // first memory address
    cout <<  (scorePtr + 1) << endl; // adding address of next integer which is 4 bytes away
    cout <<  (scorePtr + 2) << endl << endl; // adding address of next integer which is 8 bytes away


    cout << "Value of scores: " << scores << endl;
    cout << "Value of scorePtr" << scorePtr << endl;

    cout << "\nArray subscript notation--------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation--------------------------" << endl;
    cout << scorePtr[0] << endl;
    cout << scorePtr[1] << endl;
    cout << scorePtr[2] << endl;

    cout << "\nPointer offset notation--------------------------" << endl;
    cout << *scorePtr << endl;
    cout << *(scorePtr + 1) << endl;
    cout << *(scorePtr + 2) << endl;

    cout << "\nArray offset notation--------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;


    return 0;
}
