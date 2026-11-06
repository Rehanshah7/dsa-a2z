#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void sumOfDigits(int n, int &sum){
        if(n <= 0){
            return;
        }

        int rem = n % 10;
        sum = sum + rem;
        sumOfDigits(n / 10, sum);
    }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    Solution::sumOfDigits(n, sum);
    cout << sum << endl;

    return 0;
}

// pseudo code
// 1. Base condition is when n is less than or equal to 0, return from the function
// 2. Add the last digit of the number to sum
// 3. Recursively call the function with n / 10