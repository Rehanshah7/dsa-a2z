#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void reverseString(string str, int n, string &temp){
        if(n <= 0){
            return;
        }

        temp = temp + str[n - 1];
        reverseString(str, n - 1, temp);
    }
};

int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string temp = "";

    Solution::reverseString(str, str.length(), temp);
    cout << temp << endl;

    return 0;
}