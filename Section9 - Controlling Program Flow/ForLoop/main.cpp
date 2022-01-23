#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    for (int i {0}; i <= 5; i++) {
        cout << i << endl;
    }

    cout << endl << endl;

    for (int i {0}; i <= 10; i+= 2) {
        cout << i << endl;
    }

    cout << endl << endl;

    for (int i {1}, j {5}; i <= 5; ++i, ++j) {
        cout << i << " * " << j << " : " << (i * j) << endl;
    }

    cout << endl << endl;

    int scores [] {100, 90, 97};

    for (int score : scores) {
        cout << score << endl;
    }

    double average_temp{};
    double running_sum{};
    int size{};
//    for (auto temp : {60.2, 80.1, 90.0, 78.2}) {
//        running_sum += temp;
//        ++size;
//    }
    for (double temp : {60.2, 80.1, 90.0, 78.2}) {
        running_sum += temp;
        ++size;
    }

    average_temp = running_sum / size;
    cout << fixed << setprecision(1);
    cout << "Average temperature: " << average_temp << endl;

//    for (auto c : "Frank") {
//        cout << c << endl;
//    }

    for (char c : "Frank") {
        cout << c << endl;
    }

    return 0;
}

