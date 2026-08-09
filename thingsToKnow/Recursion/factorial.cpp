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