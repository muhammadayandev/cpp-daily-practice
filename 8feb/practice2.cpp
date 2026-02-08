// 2. Open and Display File Contents

// Write a C++ program to open an existing text file and display its contents on the console.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream InputFile("test.txt");
    if(InputFile.is_open()){
        string line;
        while(getline(InputFile,line)){
            cout << line << endl;
        }
        InputFile.close();
    }   else{
        cout<< "Failed To Open The File.";
    }
    return 0;
}