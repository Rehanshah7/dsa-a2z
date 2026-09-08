#include<iostream>
using namespace std;

// #include<bits/stdc++.h> This header file includes all standard libraries.
// It is not recommended for production code due to increased compilation time.

// class have the public method so that it can be accessed from outside the class.
// The method printNumber takes two integer parameters and prints them to the console.
class InputOutput{
public:
    void printNumber(int num1, int num2){
        cout << "The numbers are: " << num1 << " and " << num2 << endl;
    }
};

// main function is there to excecute the program.
// It creates an object of InputOutput class and calls the printNumber method with two integer arguments.
int main()
{
    int x = 10, y = 20;
    InputOutput io; // Create an object of InputOutput class
    io.printNumber(x, y);
    return 0;
}