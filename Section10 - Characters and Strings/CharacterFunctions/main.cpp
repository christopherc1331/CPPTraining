#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    const char foo{'b'};
    cout << isalpha(foo) << endl;
    cout << isalnum(foo) << endl;
    cout << isdigit(foo) << endl;
    cout << islower(foo) << endl;
    cout << isprint(foo) << endl;
    cout << ispunct(foo) << endl;
    cout << isupper(foo) << endl;
    cout << isspace(foo) << endl;
    cout << toupper(foo) << endl;
    cout << tolower(foo) << endl;
    return 0;
}
