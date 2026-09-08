#include<iostream>
using namespace std;


// Pass by value and pass by reference are two different ways to pass arguments to a function in C++.

// 1. Pass by Value: In this method, a copy of the actual parameter's value is made and passed to the function. Changes made to the parameter inside the function do not affect the original argument.
// 2. Pass by Reference: In this method, a reference (or address) of the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument.
class PassByValueAndReference{
    public:
        void passByValue(int x){
            x = x + 5;
            cout << "Inside passByValue function: " << x << endl;
        }

        void passByReference(int &x){
            x = x + 5;
            cout << "Inside passByReference function: " << x << endl;
        }
};

int main(){
    PassByValueAndReference obj;
    int num1 = 10;
    int num2 = 10;

    cout << "Before passByValue function: " << num1 << endl; // 10
    obj.passByValue(num1); // 15
    cout << "After passByValue function: " << num1 << endl; // 10

    cout << "Before passByReference function: " << num2 << endl; // 10
    obj.passByReference(num2); // 15
    cout << "After passByReference function: " << num2 << endl; // 15
    return 0;
}