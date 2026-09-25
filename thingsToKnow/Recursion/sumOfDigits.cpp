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