#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printSumOfN(int current, int n, int &sum){
        if(current > n){
            return;
        }

        sum = sum + current;
        return printSumOfN(current + 1, n, sum);
    }
};

int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int sum = 0;
    Solution::printSumOfN(1, n, sum);
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
}

// pseudo code
// 1. Base condition is when our current number is greater than n, return from the function
// 2. Add the current number to sum
// 3. Recursively call the function with current incremented by 1