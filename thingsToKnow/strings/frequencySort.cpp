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