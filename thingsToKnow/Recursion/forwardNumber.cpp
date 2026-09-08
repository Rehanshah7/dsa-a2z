#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printN(int current, int n){
        if(current > n){
            return;
        }

        cout << current << endl;
        printN(current + 1, n);
    }
};

int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;

    Solution::printN(1, n);
}

// pseudo code
// 1. Base condition is when our current number is greater than n, return from the function
// 2. print the current number
// 3. Call the function recursively with current incremented by 1