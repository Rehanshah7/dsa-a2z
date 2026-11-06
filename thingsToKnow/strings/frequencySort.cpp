#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    map<char, int> freq;

    for(int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }

    for(auto it : freq){
        cout << it.first << " --> " << it.second << " ";
    }
    cout << endl;

    for(auto it : freq){
        for(int i = 0; i < it.second; i++){
            cout << it.first;
        }
    }
    cout << endl;

    return 0;
}

// pseudo code
// 1. Enter a string
// 2. use stl map to store the char and it's freq in descending order as per the freq
// 3. Traverse through the map and inside it run the another loop till the freq of every char
//    It prints the each char number of times the freq will be