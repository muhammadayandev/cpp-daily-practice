#include <iostream>
using namespace std;

int main(){
    //Write a C++ program to dynamically allocate memory for a character and a string. Input a character and a string from the user.
    char *dynamic_char = new char;
    cout << "Enter Char: ";
    cin >> *dynamic_char;

    string *dynamic_string = new string;
    cout << "Enter String: ";
    cin.ignore();
    getline(cin,*dynamic_string);

    cout << "Input Character: " << *dynamic_char << endl;
    cout << "Input String: " << *dynamic_string << endl;

    delete dynamic_char;
    delete dynamic_string;
    return 0;
}