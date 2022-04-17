#include <iostream>

using namespace std;

void notes() {
    int x{100};
    int &l_ref = x;

    int &&r_ref = 200;
    r_ref = 300;

    int &x_ref = x;
    x_ref = 500;

    // checking the value of x here will display 500
    // when LRef vars are updated both the var and the assigned reference are updated
    cout << "x: " << x << endl;
    cout << "x_ref: " <<  x << endl;


    int a{100};
    int a_ref = a;
    a_ref = 500;

    // checking the value of x here will display 100
    // LRef var not used, so only the a_ref var is updated
    cout << "a: " << a << endl;
    cout << "a_ref: " <<  a_ref << endl;
}