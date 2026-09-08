#include<iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = countDigit(n);
    cout << "The number of digits in " << n << " is: " << result << endl;
    return 0;
}


// pseudo code
// 1. loop through the the n digits
// 2. divide the number by 10 in the sdame variable to remove the last digit
// 3. increment the count