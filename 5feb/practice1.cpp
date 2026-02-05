#include <iostream>
using namespace std;


// Write a C++ program that allows the user to input integers until a sentinel value (-1) is entered.
// The program should store the integers in a dynamic array.
// If the array reaches its current capacity, it should resize itself (for example, double its size) so that no data is lost.
// Implement a function int* resize_Array(int* arr, int capacity) that:

// Takes the current array and its capacity.

// Creates a new array with larger size.

// Copies all elements from the old array.

// Deletes the old array.

// Returns a pointer to the new array.

// Finally, print all integers entered by the user (excluding the sentinel value).

// Function to resize array
int* resize_Array(int *arr, int capacity){
    int new_capacity = capacity * 2;
    int *new_arr = new int[new_capacity];

    // Copy old elements
    for(int i = 0; i < capacity; i++){
        *(new_arr + i) = *(arr + i);
    }

    delete[] arr; // free old array
    return new_arr;
}

int main(){
    int capacity;
    cout << "Enter Capacity: ";
    cin >> capacity;

    int *arr = new int[capacity];  // dynamic array
    int size = 0;
    int num;

    cout << "Enter Numbers (-1 to Stop): " << endl;

    while(true){
        cout << "Enter Number: ";
        cin >> num;

        if(num == -1) break;

        // Resize if array is full
        if(size == capacity){
            arr = resize_Array(arr, capacity);
            capacity *= 2;
        }

        *(arr + size) = num;  // store number
        size++;
    }

    // Print final array
    cout << "Final Array: ";
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr; // free memory
    return 0;
}
