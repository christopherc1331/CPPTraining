#include <iostream>
using namespace std;
int main()
{
    // all memory that is allocated dynamically via a pointer comes from the heap or the free store

    // using 'new' to allocate storage on runtime
    int *intPtr{nullptr};

    intPtr = new int; // allocate an integer on the heap

    cout << intPtr << endl; // memory address

    cout << *intPtr << endl; // garbage number - hasn't been initialized yet

    *intPtr = 100;

    cout << *intPtr << endl; // 100

    // Note: when you dynamically allocate memory like this, you don't have a variable name to reference
    // the value at this memory location
    // so if the pointer to intPtr falls out of scope or you reassign,
    // then you could create a memory leak since you
    // no longer have access to that memory location even though you're done using that space in memory

    // after you're done using the storage, you need to deallocate the storage
    // so that it's available to the rest of the program

    int *intPtr2{nullptr};

    intPtr2 = new int; // allocate an integer on the heap

    delete intPtr; // frees the allocated storage



    // using new[] to allocate storage for an array

    int *arrayPtr{nullptr};
    int size{};
    cout << "How big do you want the array?";
    cin >> size;
    arrayPtr = new int[size]; // allocate array on the heap

    // must have empty square brackets between the delete keyword and the pointer var
    delete [] arrayPtr; // free allocated storage for an array


    cout << endl;



    int *intPtr3{nullptr};
    intPtr3 = new int;
    cout << intPtr3 << endl; // dynamically allocated (on the heap) memory address
    delete intPtr3; // frees up storage at that memory address

    size_t size2{0};
    double *tempPtr{nullptr};

    cout << "How many temps?";
    cin >> size2;

    tempPtr = new double[size];

    cout << tempPtr << endl; // new address

    delete [] tempPtr;




    return 0;
}
