#include <iostream>
using namespace std;

// Function to sort array: odd numbers first, then even numbers
void SortArray(int *arr, int size) {
    int *odd = new int[size];
    int *even = new int[size];  
    int oddIndex = 0, evenIndex = 0;

    // Separate odd and even numbers
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 != 0) {
            *(odd + oddIndex) = *(arr + i);
            oddIndex++;
        } else {
            *(even + evenIndex) = *(arr + i);
            evenIndex++;
        }
    }

    // Combine odd and even numbers back into arr
    int newIndex = 0;
    for (int i = 0; i < oddIndex; i++) {
        *(arr + newIndex) = *(odd + i);
        newIndex++;
    }
    for (int i = 0; i < evenIndex; i++) {
        *(arr + newIndex) = *(even + i);
        newIndex++;
    }

    // Print the new array
    cout << "New Array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] odd;
    delete[] even;
}

int main() {
    int size;
    cout << "Enter The Size Of Array: ";
    cin >> size;

    int *arr = new int[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    SortArray(arr, size);

    delete[] arr;  
    return 0;
}
