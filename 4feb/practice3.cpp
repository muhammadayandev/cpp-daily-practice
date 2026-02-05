#include <iostream>
#include <string>
using namespace std;
//This program dynamically allocates memory for two strings using 1D character arrays. It checks whether one string is a subsequence of another by comparing characters in order while allowing skipped characters. The program returns 1 if the subsequence exists, otherwise 0, and deallocates memory properly using delete[].
int main(){
    int size1, size2;
    cout << "Enter Size of Word: ";
    cin >> size1;
    cout << "Enter Size of Subsequence: ";
    cin >> size2;
    char *word = new char[size1+1];
    char *subs = new char[size2+1];
    cout << "Enter Word: ";
    cin >> word;
    cout << "Enter Subsequence: ";
    cin >> subs;
    int i = 0,j=0;
    while(word[i]!='\0'&&subs[j]!='\0'){
        if(word[i]==subs[j]){
            j++;
        }
        i++;
    }

    if(subs[j]=='\0'){
        cout << 1;
    } else {
        cout << 0;
    }
    
    delete[] word;
    delete[] subs;
    return 0;
}