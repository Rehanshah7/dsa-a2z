#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printFactOfN(int current, int n, int &fact){
        if(current > n){
            return;
        }

        fact = fact * current;
        return printFactOfN(current + 1, n, fact);
    }
};

int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int fact = 1;
    Solution::printFactOfN(1, n, fact);
    cout << "The sum of first " << n << " natural numbers is: " << fact << endl;
}

// pseudo code
// 1. Base condition is when our current number is greater than n, return from the function
// 2. Multiply the currentnumber to the factorial and factorial must be initialized to 1
// 3. Recursively call the function with current incremented by 1