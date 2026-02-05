#include <iostream>
#include <string>
using namespace std;
//This program checks whether one string is a subsequence of another by comparing characters in order and allowing skipping of characters in the main string.
int main(){
    string word, subs;
    cout << "Enter main string: ";
    cin >> word;
    cout << "Enter subsequence: ";
    cin >> subs;
    int i = 0, j = 0;
    while(i<word.length()&&j<subs.length()){
        if(word[i]==subs[j]){
            j++;
        }
        i++;
    }

    if(j==subs.length()){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}