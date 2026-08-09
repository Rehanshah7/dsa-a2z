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