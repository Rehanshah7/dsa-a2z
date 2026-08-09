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