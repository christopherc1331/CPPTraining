#include <iostream>

using namespace std;

int main()
{
    /*
     * Literal Constant Types
     *
     * -----------------------------------------
     * Integer Literal Constants:
     * 12         - an integer
     * 12U        - an unsigned integer
     * 12L        - a long integer
     * 12LL       - a long long integer
     * -----------------------------------------
     *
     * -----------------------------------------
     * Floating-point Literal Constants:
     * 12.1       - a double
     * 12.1F      - a float
     * 12.1L      - a long double
     * -----------------------------------------
     *
     * -----------------------------------------
     * Declared Constants
     * const double pi{3.1415926};
     *
     * const int months_in_year{12};
     *
     * pi = 2.5  ||  Results in compiler error
     */


    /*
     * Frank's Carpet Cleaning Service
     *
     * Steps
     *
     * Prompt the user to enter the # of rooms
     * Display # of rooms
     * Display price per room
     *
     * Display cost: (number of rooms * price per room)
     * Display tax: number of rooms * price per room * tax
     * Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
     * Display estimate expiration time
     */

    cout << "Hello, welcome to Franks' Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?";

    int number_of_rooms{0};
    cin >> number_of_rooms;

    const double price_per_room{30.0};
    const double sales_tax_rate{0.06};
    const int estimate_expiry{30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax_rate << endl;
    cout << "=======================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax_rate) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    cout << endl;
    return 0;
}
