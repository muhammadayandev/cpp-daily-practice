#include <iostream>
#include <fstream> // including file stream library 
using namespace std;

//1. Create and Write to a Text File

//Write a C++ program to create a new text file and write some text into it.

int main(){
    ofstream outputFile("test.txt"); // Open/create a file named "test.txt" for writing
    
    // Check if the file was successfully opened
    if(outputFile.is_open()){

         // Write some text into the file
        outputFile << "C++ is a high-level, general-purpose programming language created by Danish computer scientist Bjarne Stroustrup. \n";
        outputFile << "First released in 1985 as an extension of the C programming language, it has since expanded significantly over time. \n"; 
        outputFile << "Modern C++ currently has object-oriented, generic, and functional features, in addition to facilities for low-level memory manipulation.\n"; 
        outputFile << "It is almost always implemented in a compiled language.\n";  
        outputFile << "Many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM.";  


        // Close the file
        outputFile.close();  // Close the file after writing
        cout << "Text has been written to the file." << endl;  // Display a success message
    }
        else {
        cout << "Failed to create the file." << endl;  
        // Display an error message if file creation failed
  }


    return 0;
}