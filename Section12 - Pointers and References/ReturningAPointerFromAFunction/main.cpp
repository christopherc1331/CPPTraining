#include <iostream>

using namespace std;

int *largestInt(int *intPtr1, int *intPtr2);
int *createArray(size_t size, int initValue = 0);
void display(const int *const array, size_t size);

int main()
{
    int a{100};
    int b{200};
    int *largestPtr{nullptr};
    largestPtr = largestInt(&a, &b);
    cout << *largestPtr << endl << endl; // 200

    int *myArray;
    size_t size{};
    int initValue{};

    cout << "How many integers would you like to allocate?";
    cin >> size;
    cout << "What value would you like them initialized to?";
    cin >> initValue;

    myArray = createArray(size, initValue);
    cout << "\n-----------------------------" << endl;


    display(myArray, size);

    delete myArray;

    // the next display method points to deallocated memory addresses
    display(myArray, size);

    return 0;
}


int *largestInt(int *intPtr1, int *intPtr2) {
    if (*intPtr1 > *intPtr2) {
        return intPtr1;
    }
    else {
        return intPtr2;
    }
}

int *createArray(size_t size, int initValue) {
    int *newStorage {nullptr};
    newStorage = new int[size];
    for (size_t i{0}; i < size; i++) {
        *(newStorage + i) = initValue;
    }
    return newStorage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}