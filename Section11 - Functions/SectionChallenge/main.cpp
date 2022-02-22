#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void printWithNewLine(const string &message);
void printVector(const vector<int> &v);
void addNumFromInputToVector(vector<int> &v);
int getSumFromVector(const vector<int> &v);
float getVectorMean(const vector<int> &v);
void getSmallestInVector(const vector<int> &v, int &smallestPointer);
void getLargestInVector(const vector<int> &v, int &largestPointer);

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    char input{};
    do {
        printWithNewLine("P - Print numbers");
        printWithNewLine("A - Add a number");
        printWithNewLine("M - Display the mean of the numbers");
        printWithNewLine("S - Display the smallest number");
        printWithNewLine("L - Display the largest number");
        printWithNewLine("Q - Quit");
        cin >> input;

        if (toupper(input) != 'Q') {
            switch (toupper(input)) {
                case 'P':
                    if (nums.empty()) {
                        printWithNewLine("[] - the list is empty");
                    }
                    else {
                        printVector(nums);
                    }
                    break;
                case 'A': {
                    addNumFromInputToVector(nums);
                    break;
                }
                case 'M':
                    if (nums.empty()) {
                        printWithNewLine("Unable to calculate the mean - no data");
                    }
                    else {
                        cout << "Mean is :" << getVectorMean(nums) << endl;
                    }
                    break;
                case 'S':
                    if (nums.empty()) {
                        printWithNewLine("Unable to determine the smallest number - list is empty");
                    }
                    else {
                        int smallest{nums.at(0)};
                        getSmallestInVector(nums, smallest);
                        cout << "Smallest number is " << smallest << endl;
                    }
                case 'L':
                    if (nums.empty()) {
                        printWithNewLine("Unable to determine the largest number - list is empty");
                    }
                    else {
                        int largest{nums.at(0)};
                        getLargestInVector(nums, largest);
                        cout << "Largest number is " << largest << endl;
                    }
            }
        }
    } while (toupper(input) != 'Q');

    printWithNewLine("Goodbye...");
    return 0;
}

void printWithNewLine(const string &message) {
    cout << message << endl;
}

void printVector(const vector<int> &v) {
    cout << "[ ";
    for (int num: v) {
        cout << num << " ";
    }
    cout << "]" << endl;
}

void addNumFromInputToVector(vector<int> &v) {
    int numToAdd{};
    printWithNewLine("Please enter a number to add:");
    cin >> numToAdd;
    v.push_back(numToAdd);
    cout << endl;
}

int getSumFromVector(const vector<int> &v) {
    int sum{};
    for (int num: v) {
        sum += num;
    }
    return sum;
}

float getVectorMean(const vector<int> &v) {
    int sum{getSumFromVector(v)};
    size_t size{v.size()};
    return static_cast<float> (sum) / static_cast<float> (size);
}

void getSmallestInVector(const vector<int> &v, int &smallestPointer) {
    for (int num: v) {
        if (num < smallestPointer) {
            smallestPointer = num;
        }
    }
}

void getLargestInVector(const vector<int> &v, int &largestPointer) {
    for (int num: v) {
        if (num > largestPointer) {
            largestPointer = num;
        }
    }
}