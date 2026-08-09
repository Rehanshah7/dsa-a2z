#include<iostream>
using namespace std;

int palindromeDigit(int n){
    int revNum = 0;
    int copy = n; // Store the original number to compare later

    if(n == 0){
        return 0;
    }

    while(n > 0){
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    
    if(revNum == copy){
        return 1; // The number is a palindrome
    } else {
        return 0; // The number is not a palindrome
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int palindromeNumber = palindromeDigit(n);
    if(palindromeNumber == 1){
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;
}