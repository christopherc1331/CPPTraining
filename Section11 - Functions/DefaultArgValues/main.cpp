#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calcCost(double baseCost, double taxRate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

double calcCost(double baseCost, double taxRate, double shipping) {
    return baseCost += (baseCost * taxRate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}


int main()
{
    double cost{};
    cost = calcCost(100.0, 0.08, 4.25);

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calcCost(100.0, 0.08);
    cout << "Cost is: " << cost << endl;

    cost = calcCost(200.0);
    cout << "Cost is: " << cost << endl;

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.","Ph.D");

    return 0;
}
