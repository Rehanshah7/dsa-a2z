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