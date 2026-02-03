#include <iostream>
#include <string>
using namespace std;
//Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.
int main(){
    int size= 8;
    int *dynamicIntArray = new int[size];
    for(int i = 0;i<size;i++){
        dynamicIntArray[i] = i+1;
    }
    string *dynamicStringArray = new string[size];
    for(int i = 0;i<size;i++){
        dynamicStringArray[i] = "Element-" + to_string(i+1);
    }

    
    cout << "Dynamically allocated integer array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicIntArray[i] << " ";
    }
    cout << endl;

    cout << "\nDynamically allocated string array:" << std::endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicStringArray[i] << endl; 
    }

    return 0;
}