#include<iostream>
using namespace std;

int reverseDigit(int n){
    int revNum = 0;

    while(n > 0){
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    return revNum;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversedNumber = reverseDigit(n);
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}

// pseudo code
// 1. Initialise the extra vairable and loop through the n digits
// 2. get the last digit of the number by modulus 10
// 3, multiply the extra variable by 10 and add the last digit to it
// 4. divide the number by 10 in the same variable to remove the last digit