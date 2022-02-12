#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{s1};
    string s5{s1, 0, 3};
    string s6{10, 'X'};

//    cout << s0 << endl;
//    cout << s0.length() << endl;

    cout << "\nAssignment" << "\n----------------------------------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "s3 change first letter to 'C':" << s3 << endl; // Crank
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P':" << s3 << endl; // Prank


    cout << "\nConcatenation" << "\n----------------------------------------" << endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice"; // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl;

    s3 = "nice " + " cold" + s5 + " juice";  // can't concatenate string literals against each other
    s3 = strcat("nice ", " cold") + s5 + " juice";  // can't concatenate string literals against each other



    return 0;
}
