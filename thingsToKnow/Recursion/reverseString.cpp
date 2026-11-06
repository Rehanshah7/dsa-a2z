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

// pseudo code
// 1. Base condition is when n is less than or equal to 0, return from the function
// 2. Add the last element of the string to the temp string
// 3. Recursively call the function with n - 1