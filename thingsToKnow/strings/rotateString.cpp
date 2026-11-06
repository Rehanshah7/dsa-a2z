#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string goal;
    cout << "Enter the rotated string: ";
    cin >> goal;

    string rotated = s + s;
    if(s.length() == goal.length() && rotated.find(goal) != string::npos){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

// pseudo code
// 1. Enter the String s and String goal as two variable
// 2. Double the string s + s as every rotation will always be found in the rotated string
// 3. First check the length of goal and the string length and if both will be equal then check 
//    whether the rotated string has the goal inside it and if it presents then prints True else False