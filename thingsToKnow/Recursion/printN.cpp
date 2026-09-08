#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printN(int n){
        if(n == 0){
            return;
        }

        cout << n << endl;
        printN(n - 1);
    }
};

int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;

    Solution::printN(n);
}

// pseudo code
// 1. There should be a base condition to stop the recursion. In this case, when n is equal to 0, we return from the function.
// 2. Print the current value of n.
// 3. Recursively call the function with n - 1.