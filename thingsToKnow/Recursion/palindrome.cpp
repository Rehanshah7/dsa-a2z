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