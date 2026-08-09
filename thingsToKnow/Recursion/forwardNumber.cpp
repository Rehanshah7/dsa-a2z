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