#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printNameNTimes(string name, int count, int n){
        if(count == n){
            return;
        }

        cout << name << endl;
        printNameNTimes(name, count + 1, n);
    }
};

int main(){
    string name;
    int n;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the number of times to print your name: ";
    cin >> n;

    Solution::printNameNTimes(name, 0, n);
}

// pseudo code
// 1. Base condition is when count is equal to n, return from the function
// 2. print the name
// 3. Call the function recursively with count incremented by 1