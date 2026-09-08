// iostream is a header file that contains definitions of objects like cin, cout, etc.
// It is used to perform the input output operations in c++ and it stand's for the input output stream.
#include <iostream>
using namespace std; // std is a namespace that contains all the classes and functions of the standard C++ library.

int main(){
    int grade; // variable declared
    cout << "Enter your grade: " << endl; // output
    cin >> grade; // input

    // conditional statements to check the grade and print the corresponding message
    if(grade >= 90){
        cout << "You got an A!" << endl;
    } else if(grade >= 80){
        cout << "You got a B!" << endl;
    } else if(grade >= 70){
        cout << "You got a C!" << endl;
    } else if(grade >= 60){
        cout << "You got a D!" << endl;
    } else{ // if all the above conditions are false, then this block will be executed
        cout << "You failed the course." << endl;
    }
    return 0;
}