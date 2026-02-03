#include <iostream>
#include <string>
using namespace std;

int main(){
    // Write a C++ program to dynamically allocate two two-dimensional arrays of floating values and strings. Initialize its elements.
    int rows = 3;
    int cols = 4;
    float **dynamic_float_array = new float*[rows]; // Allocating memory for the array of float pointers (rows)
    for(int i = 0;i<rows;i++){
        dynamic_float_array[i] = new float[cols]; // Allocating memory for each row (array of floats)
    }
    //initializing element of the array
    float value = 1.2;
    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            dynamic_float_array[i][j] = value;
            value+=1.0;
        }
    }

    string **dynamic_string_array = new string*[rows];
    for(int i = 0;i<rows;i++){
        dynamic_string_array[i] = new string[cols];
    }

    //initializing element of the array
    string element = "M";
    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            dynamic_string_array[i][j] = element;
            element[0]+=1;
        }
    }

    //printing arrays
    cout << "Dynamically allocated float array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamic_float_array[i][j] << " ";
    }
    cout << endl;
    }
    cout << endl;

  // Display the elements of the string array
    cout << "Dynamically allocated string array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamic_string_array[i][j] << " ";  // Outputting each element of the dynamically allocated string array
    }
    cout << endl;
    }

    // Deallocate the memory allocated for both arrays
    for (int i = 0; i < rows; i++) {
        delete[] dynamic_float_array[i];
        delete[] dynamic_string_array[i];
    }
    delete[] dynamic_float_array;
    delete[] dynamic_string_array;

    return 0; 
}