#include <iostream>
using namespace std;

int main()
{
    int counter {10};
    int result {0};

    cout << "Counter:" << counter << endl;  // 10

    counter = counter + 1;
    cout << "Counter:" << counter << endl;  // 11

    counter++;
    cout << "Counter:" << counter << endl;  // 12

    ++counter;
    cout << "Counter:" << counter << endl;  // 13


    counter = 10;
    result = 0;

    cout << "Counter:" << counter << endl;  // 10

    result = ++counter;
    cout << "Counter:" << counter << endl;  // 11
    cout << "Result:" << result << endl;  // 11


    counter = 10;
    result = 0;

    cout << "Counter:" << counter << endl;  // 10

    result = counter++;
    cout << "Counter:" << counter << endl;  // 11
    cout << "Result:" << result << endl;  // 10


    counter = 10;
    result = 0;

    cout << "Counter:" << counter << endl;  // 10

    result = ++counter + 10;
    cout << "Counter:" << counter << endl;  // 11
    cout << "Result:" << result << endl;  // 21


    counter = 10;
    result = 0;

    cout << "Counter:" << counter << endl;  // 10

    result = counter++ + 10;
    cout << "Counter:" << counter << endl;  // 11
    cout << "Result:" << result << endl;  // 20


    return 0;
}
