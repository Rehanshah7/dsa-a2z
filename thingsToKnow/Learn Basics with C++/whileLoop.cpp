#include <iostream>
using namespace std;

int main(){
    int number;
    int factorial = 1;

    cout << "Enter a number: " << endl;
    cin >> number;

    // difference between while and for loop is that in while loop we don't know how many times the loop will run, but in for loop we know how many times the loop will run.
    // It measn that while loop can have the condition like false or true, but for loop can't have the condition like false or true.
    while (number > 0){
        factorial *= number;
        number--;
    }
    cout << "The factorial is: " << factorial << endl;
    return 0;
}