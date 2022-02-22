#include <iostream>
#include <cmath>

using namespace std;
const double pi{3.14159};


double calcAreaCircle(double radius) {
    return pi * pow(radius, 2.0);
}

double calcVolumeCylinder(double radius,double height) {
    return calcAreaCircle(radius) * height;
}

void areaCircle() {
    double radius{};
    cout << "\nEnter the radius of the circle:";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calcAreaCircle(radius) << endl;
}

void volumeCylinder() {
    double radius{};
    double height{};
    cout << "\nEnter the radius of the circle:";
    cin >> radius;
    cout << "\nEnter the height of the circle:";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calcVolumeCylinder(radius, height) << endl;

}

int main()
{
    areaCircle();
    volumeCylinder();
    return 0;
}