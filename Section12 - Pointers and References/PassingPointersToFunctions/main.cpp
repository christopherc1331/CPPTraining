#include <iostream>
#include <vector>

using namespace std;

void doubleData(int *intPtr);
void swap(int *a, int *b);
void display(const vector<string> *v);
void display(int *array, int sentinel);

int main()
{

    int value{10};
    int *intPtr{nullptr};
    cout << "Value: " << value << endl;
    cout << "-------------------" << endl;

    doubleData(&value);
    cout << "Value: " << value << endl;
    cout << "-------------------" << endl;

    intPtr = &value;
    doubleData(intPtr);
    cout << "Value: " << value << endl;

    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl << endl;

    swap(&x, &y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl << endl;
    cout << "--------------------------" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);
    cout << "--------------------------" << endl;

    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);



    return 0;
}

void doubleData(int *intPtr) {
    *intPtr *= 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v) {
    for (const string &s: *v) {
        cout << s << " ";
    }
    cout << endl;
}

void display(int *array, int sentinel) {
    while(*array != sentinel) {
        cout << *array++ << " ";
    }
    cout << endl;
}