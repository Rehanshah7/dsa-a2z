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