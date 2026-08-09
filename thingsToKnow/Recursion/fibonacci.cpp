#include<bits/stdc++.h>
using namespace std;

int fibonacci(int a, int b, int n){
    if(n == 0){
        return a;
    }
    if(n == 1){
        return b;
    }

    for (int i = 2; i <= n; i++){
        int next = a + b;
        a = b;
        b = next;
        cout << "Fibonacci number at position " << i << " is: " << b << endl;
    }
}

int main(){
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;

    int fibNum = fibonacci(0, 1, n);
    cout << "The Fibonacci number at position " << n << " is: " << fibNum << endl;
}