#include <iostream>
using namespace std;

int main()
{
    enum Direction {
        left_dir,
        right_dir,
        up_dir,
        down_dir
    };

    Direction heading {left_dir};

    switch (heading) {
        case left_dir:
            cout << "Going left" << endl;
            break;
        case right_dir:
            cout << "Going right" << endl;
            break;
        default:
            cout << "OK" << endl;
    }

    return 0;
}
