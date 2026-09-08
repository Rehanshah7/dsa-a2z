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

// pseudo code
// 1. Initialise the extra vairable and store the original number and loop through the n digits
// 2. get the last digit of the number by modulus 10
// 3, multiply the extra variable by 10 and add the last digit to it
// 4. divide the number by 10 in the same variable to remove the last digit
// 5. check if the reversed number is equal to the original number, if yes then it is a palindrome number otherwise not