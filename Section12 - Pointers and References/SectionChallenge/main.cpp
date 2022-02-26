#include <iostream>

using namespace std;

void print(const int array[], const size_t &size);
int *applyAll(const int array1[], size_t size1, const int array2[], size_t size2);

int main()
{

    const size_t array1Size{5};
    const size_t array2Size{3};

    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1Size);

    cout << "Array 2: ";
    print(array2, array2Size);


    int *results = applyAll(array1, array1Size, array2, array2Size);
    constexpr size_t resultsSize {array1Size * array2Size};

    cout << "Result: ";
    print(results, resultsSize);

    // deallocate memory addresses for other programs to use
    delete results;

    return 0;
}

void print(const int array[], const size_t &size) {
    for (size_t i{0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int *applyAll(const int array1[], size_t size1, const int array2[], size_t size2) {
    int *results{nullptr};

    results = new int[size1 * size2];
    size_t resultsIdx{0};

    for (size_t i{0}; i < size1; i++) {
        for (size_t k{0}; k < size2; k++) {
            results[resultsIdx] = array1[i] * array2[k];
            resultsIdx += 1;
        }
    }

    return results;
}

