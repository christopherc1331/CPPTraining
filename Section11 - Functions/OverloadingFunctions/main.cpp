#include <iostream>
#include <cmath>
using namespace std;


int find_area(int width);
double find_area(double length, double width);

int main() {

    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;

    return 0;
}

int find_area(int width) {
    return pow(width, 2);
}

double find_area(double length, double width) {
    return length * width;
}