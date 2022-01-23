#include <iostream>
using namespace std;

int main()
{
    const double usd_per_euror {1.19};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR:";
    cin >> euros;

    dollars = euros * usd_per_euror;

    cout << euros << " euros is equivalent to " << dollars << " dollars";
    cout << endl;


    return 0;
}
