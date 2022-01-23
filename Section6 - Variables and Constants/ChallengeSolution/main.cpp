#include <iostream>

using namespace std;

int main()
{

    /*
     * Frank's Carpet Cleaning Service
     * Charges:
     * $25 per small room
     * $35 per large room
     * Sales tax rate is 6%
     * Estimates are valid for 30 days
     *
     * Prompt the user for the number of small and large rooms they would like cleaned
     * and provide an estimate as such
     *
     * Estimate for carpet cleaning service
     * Number of small rooms
     * Number of large rooms
     * Price per small room
     * Price per large room
     * Cost
     * Tax
     * =======================================
     * Total estimate
     * This estimate is valid for x days
     */

    const int price_small_room{25};
    const int price_large_room{35};
    const double sales_tax_rate{0.06};
    const int estimate_expiry{30};

    int small_room_count;
    int large_room_count;

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned?";
    cin >> small_room_count;
    cout << "\nHow many large rooms would you like cleaned?";
    cin >> large_room_count;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_room_count << endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Number of large rooms: " << large_room_count << endl;
    cout << "Price per large room: $" << price_large_room << endl;

    double total_cost = (small_room_count * price_small_room) + (large_room_count * price_large_room);
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_cost * sales_tax_rate << endl;
    cout << "======================================================================" << endl;
    cout << "Total estimate: $" << total_cost + (total_cost * sales_tax_rate) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days";

}
