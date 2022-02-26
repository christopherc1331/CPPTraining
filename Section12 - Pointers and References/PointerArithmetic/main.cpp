#include <iostream>

using namespace std;

int main()
{
    int scores[]{100, 95, 89, 68, -1};
    int *scorePtr{scores};

    // -1 terminates array memory chunk
    while (*scorePtr != -1) {
        cout << *scorePtr << endl;
        scorePtr++; // incrementing by the pointer type memory location element size
    }

    cout << endl;

    scorePtr = scores;
    while (*scorePtr != -1) {
        cout << *scorePtr++ << endl;
    }

    cout << "\n-----------------------------------------" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    // prints true/false instead of 0/1
    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // true

    p3 = &s3; // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false


    cout << "\n--------------------------------------" << endl;
    char name[]{"Frank"};

    char *charPtr1{nullptr};
    char *charPtr2{nullptr};

    charPtr1 = &name[0]; // F
    charPtr2 = &name[3]; // n

    cout << "In the string " << name << ", " << *charPtr2 << " is " << (charPtr2 - charPtr1);
    cout << " characters away from " << *charPtr1 << endl;

    return 0;
}
