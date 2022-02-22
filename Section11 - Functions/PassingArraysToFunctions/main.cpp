#include <iostream>

using namespace std;

void printArray(const int numbers[], size_t size);
void zeroArray(int numbers[], size_t size);

int main()
{

    int myNumbers[] { 1, 2, 3, 4, 5};
    printArray(myNumbers, 5);
    zeroArray(myNumbers, 5);
    printArray(myNumbers, 5);

    return 0;
}

void printArray(const int numbers[], size_t size) {
    for (size_t i{0}; i < size; i++) {
        cout << numbers[i] << endl;
    }
}

void zeroArray(int numbers[], size_t size) {
    for (size_t i{0}; i < size; i++) {
        numbers[i] = 0;
    }
}