#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    char input{};
    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> input;

        if (toupper(input) != 'Q') {
            switch (toupper(input)) {
                case 'P':
                    if (nums.empty()) {
                        cout << "[] - the list is empty" << endl;
                    }
                    else {
                        cout << "[ ";
                        for (int num: nums) {
                            cout << num << " ";
                        }
                        cout << "]" << endl;
                    }
                    break;
                case 'A': {
                    int numToAdd{};
                    cout << "Please enter a number to add:";
                    cin >> numToAdd;
                    nums.push_back(numToAdd);
                    cout << endl;
                    break;
                }
                case 'M':
                    if (nums.empty()) {
                        cout << "Unable to calculate the mean - no data" << endl;
                    }
                    else {
                        int sum{};
                        for (int num: nums) {
                            sum += num;
                        }
                        cout << "Mean is :" << static_cast<float> (sum) / static_cast<float> (nums.size()) << endl;
                    }
                    break;
                case 'S':
                    if (nums.empty()) {
                        cout << "Unable to determine the smallest number - list is empty" << endl;
                    }
                    else {
                        int smallest{nums.at(0)};
                        for (int num: nums) {
                            if (num < smallest) {
                                smallest = num;
                            }
                        }
                        cout << "Smallest number is " << smallest << endl;
                    }
                case 'L':
                    if (nums.empty()) {
                        cout << "Unable to determine the largest number - list is empty" << endl;
                    }
                    else {
                        int largest{nums.at(0)};
                        for (int num: nums) {
                            if (num > largest) {
                                largest = num;
                            }
                        }
                        cout << "Largest number is " << largest << endl;
                    }
            }
        }
    } while (toupper(input) != 'Q');

    cout << "Goodbye...";
    return 0;
}
