#include <iostream>
using namespace std;

int main()
{
    /**
     * For this program I will be using US dollars and cents
     *
     * Write a program that asks the user to enter the following:
     * An integer representing the number of cents
     *
     * You may assume that the number of cents entered is greater than or equal to zero
     *
     * The program should then display how to provide that change to the user
     *
     * In the US:
     *      1 dollar is 100 cents
     *      1 quarter is 25 cents
     *      1 dime is 10 cents
     *      1 nickel is 5 cents
     *      1 penny is 1 cent
     *
     * Here is a sample run
     *
     * Enter an amount in cents: 92
     *
     *
     * You can provide this change as follows:
     * dollars      :0
     * quarters     :3
     * dimes        :1
     * nickels      :1
     * pennies      :2
     *
     *
     */

    int cents{}, change{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    cout << "Enter an amount in cents:";
    cin >> cents;

    dollars = cents / 100;
    change = cents % 100;
    cout << "dollars        :" << dollars << endl;

    quarters = change / 25;
    change %= 25;
    cout << "quarters       :" << quarters << endl;

    dimes = change / 10;
    change %= 10;
    cout << "dimes          :" << dimes << endl;

    nickels = change / 5;
    change %= 5;
    cout << "nickels        :" << nickels << endl;

    pennies = change / 1;
    cout << "pennies        :" << pennies << endl;


    return 0;
}