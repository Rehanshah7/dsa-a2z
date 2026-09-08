#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;

    int fibNum = fibonacci(n);
    cout << "The Fibonacci number at position " << n << " is: " << fibNum << endl;
}

//pseudo code and it's time complexity is O(2^n) and space complexity is O(n)
// 1. Base condition would be if n is less than or equal to 1, return n
// 2. If n is greater than 1, return the sum of fibonacci(n - 1) and fibonacci(n - 2)
// 3. This will recursively calculate the Fibonacci number at position n and print it