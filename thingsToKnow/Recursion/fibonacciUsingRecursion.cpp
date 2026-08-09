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