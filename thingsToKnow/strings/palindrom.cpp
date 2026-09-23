#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reverseStr;
    for(int i = str.length() - 1; i >= 0; i--){
        reverseStr += str[i];
    }
    cout << endl;

    if(reverseStr == str){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    
    return 0;
}