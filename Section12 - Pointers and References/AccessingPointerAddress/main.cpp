#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num{10};
    cout << "Value of num is: " << num << endl; // 10
    cout << "sizeof of num is: " << sizeof num << endl; // 4 (4 bytes)
    cout << "Address of num is: " << &num << endl; // 0X61ff1c

    int *p;
    cout << "Value of p is: " << p << endl; // 0X61ff1c -garbage (uninitialized)
    cout << "sizeof of p is: " << sizeof p << endl; // 4 (4 bytes)
    cout << "Address of p is: " << &p << endl; // 0X61ff18

    p = nullptr;
    cout << "Value of p is: " << p << endl; // 0


    // all of these pointer variables have the same sizeof value
    int *p1{nullptr};
    int *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};
    //

    int score{10};
    double highTemp{100.7};
    int *scorePtr{nullptr};
    scorePtr = &score;
//    scorePtr = &highTemp; // pointer type doesn't match reference assignment type


    double high_temp{100.7};
    double low_temp{37.2};
    double *temp_ptr;
    temp_ptr = &high_temp;
    temp_ptr = &low_temp;
    temp_ptr = nullptr;

    return 0;
}
