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

// pseudo code and it's time complexity is O(n) and space complexity is O(1)
// 1. Initialize two variables, a and b, to 0 and 1 respectively
// 2. If n is 0, return a
// 3. If n is 1, return b
// 4. Loop through the numbers from 2 to n
//    a. Calculate the next Fibonacci number by adding a and b in the variable next
//    b. Update a to be b and b to be next
// 5. Return b as the current Fibonacci number at position n