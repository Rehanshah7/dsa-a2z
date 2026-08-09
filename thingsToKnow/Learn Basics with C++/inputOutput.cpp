#include<iostream>
using namespace std;

// #include<bits/stdc++.h> This header file includes all standard libraries. It is not recommended for production code due to increased compilation time.

class InputOutput{
public:
    void printNumber(int num1, int num2){
        cout << "The numbers are: " << num1 << " and " << num2 << endl;
    }
};

int main()
{
    int x = 10, y = 20;
    InputOutput io;
    io.printNumber(x, y);
    return 0;
}