#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int score{100};
    int *scorePtr{&score};

    // accessing value at memory address
    cout << *scorePtr << endl << endl; // 100

    // *reassigning* value at memory address
    *scorePtr = 200;

    cout << *scorePtr << endl; // 200
    cout << score << endl << endl; // 200

    double highTemp{100.7};
    double lowTemp{37.4};
    double *tempPtr{&highTemp};

    cout << *tempPtr << endl; // 100.7
    tempPtr = &lowTemp;
    cout << tempPtr << endl; // now lives at new address
    cout << *tempPtr << endl << endl; // 37.4

    string name{"Frank"};
    string *stringPtr{&name};

    cout << *stringPtr << endl; // Frank

    // Reassign value at that memory location, which affects all pointers and variables
    // that live/point at/to that memory location
    name = "James";

    cout << *stringPtr << endl << endl; // James


    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vectorPtr{nullptr};
    vectorPtr = &stooges;

    // here you dereference the pointer before you call methods against the value at the address
    cout << "First stooge: " << (*vectorPtr).at(0) << endl; // Larry
    cout << "Stooges: ";
    for (const string& stooge: *vectorPtr) {
        cout << stooge << " ";
    }
    cout << endl;
    return 0;
}
