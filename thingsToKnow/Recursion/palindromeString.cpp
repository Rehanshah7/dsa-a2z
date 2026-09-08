#include<bits/stdc++.h>
using namespace std;

class PalindromeChecker{
    public: 
    bool isPalindrome(string str){
        int left = 0;
        int right = str.length() - 1;
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main(){
    string str = "racecar";

    PalindromeChecker Obj;
    if(Obj.isPalindrome(str)){
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

// pseudo code and it's time complexity is O(n) and space complexity is O(1)
// 1. Initialize two pointers, left and right, to the start and end of the string respectively.
// 2. While left is less than right, do the following:
//    a. If the characters at the left and right pointers are not equal, return false.
//    b. Increment left and decrement right.
// 3. If the loop completes without returning false, return true.