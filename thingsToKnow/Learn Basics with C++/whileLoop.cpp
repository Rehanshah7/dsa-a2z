#include <iostream>
using namespace std;

int main(){
    int number;
    int factorial = 1;

    cout << "Enter a number: " << endl;
    cin >> number;

    while (number > 0){
        factorial *= number;
        number--;
    }
    cout << "The factorial is: " << factorial << endl;
    return 0;
}