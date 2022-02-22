#include <iostream>

using namespace std;

void scaleNumber(int &num);

int main()
{
    int number{400};
    scaleNumber(number);

    cout << number << endl;

    return 0;
}

void scaleNumber(int &num)  {
    if (num > 100) {
        num = 100;
    }
}
