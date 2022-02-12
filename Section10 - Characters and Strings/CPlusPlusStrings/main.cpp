#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2 {"Frank"};
    string s3{s2};
    string s4{"Frank", 3};
    string s5{s3, 0, 2};
    string s6 {3, 'X'};

    string s7;
    s7 = "C++ Rocks!";

    string s8;
    s8 = s7;

    string part1{"C++"};
    string part2{"is a powerful"};
    string sentence;

    sentence = part1 + " " + part2 + " language";

//    sentence = "C++" + " is powerful"; // Illegal (can't concatenate only string literals; need a var as well

    string name{"Frank"};
    for (char c : name) {
        cout << c << endl;
    }

    for (int c : name) {
        cout << c << endl;
    }

    cout << endl;

    string test{"This is a test"};
    cout << test.substr(0, 4) << endl;
    cout << test.substr(5, 2) << endl;
    cout << test.substr(10, 4) << endl;

    cout << endl;

    cout << test.find("This") << endl;
    cout << test.find("is") << endl;
    cout << test.find("test") << endl;
    cout << test.find('e') << endl;
    cout << test.find("is", 4) << endl;
    cout << test.find("XX") << endl;

    cout << test.erase(0,5) << endl;
    cout << test.erase(5,4) << endl;
    test.clear();
    cout << test << endl;

    cout << endl;

    string frank{"Frank"};
    cout << frank.length() << endl;
    frank += " James";
    cout << frank << endl;

    string demo;
    cout << "Enter your first and last name separated by a space:";
    cin >> demo; // only accepts up to the first space

    cout << demo << endl;

    cout << "Enter your first and last name separated by a space:";
    getline(cin, demo);  // reads the entire line until \n
    cout << demo << endl;

    cout << "Enter your first and last name separated by a space:";
    getline(cin, demo, 'x'); // stops reading at delimiter 'x' (non-inclusive)
    cout << demo << endl;


    return 0;
}
