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