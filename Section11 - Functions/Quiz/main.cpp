#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};


double a_penny_doubled_everyday(int n, double total_amount = 0.01);

int main() {
    double total_amount = a_penny_doubled_everyday(25);

    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int n, double total_amount) {
    function_activation_count++;

    if (function_activation_count == n) {
        return total_amount;
    }
    else {
        return a_penny_doubled_everyday(n, total_amount * 2);
    }

}

int test_function_activation_count() {
    return function_activation_count;
}