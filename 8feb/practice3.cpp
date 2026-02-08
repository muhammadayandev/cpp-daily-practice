#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//3. Count the Number of Lines in a Text File

//Write a C++ program to count the number of lines in a text file.


int main(){

    ifstream file("test.txt");
    if(file.is_open()){
        string line;
        int lineCount=0;
        while(getline(file,line)){
            lineCount++;
        }
        file.close();
        cout << "Number of lines in the file: " << lineCount << endl;
    } else{
        cout << "Failed To Open The File";
    }
    return 0;
}