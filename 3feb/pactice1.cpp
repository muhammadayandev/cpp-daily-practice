#include <iostream>
#include <string>
//Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.
using namespace std;
int main(){
    //dynamic allocation
    int *dynamicInt = new int;
    *dynamicInt = 20;
    char *dynamicChar = new char;
    *dynamicChar = 'A';
    string *dynamicString = new string;
    *dynamicString = "I am a Dynamic Allocated String.";
    //printing
    cout << *dynamicInt << endl;
    cout << *dynamicChar << endl;
    cout << *dynamicString << endl;
    //deallocating

    delete dynamicInt;
    delete dynamicChar;
    delete dynamicString;

    return 0;

}