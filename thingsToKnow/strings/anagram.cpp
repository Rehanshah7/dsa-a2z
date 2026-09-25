#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string t;
    cout << "Enter the other string to check whether it is an anagram of s: ";
    cin >> t;

    if(s.length() != t.length()){
        cout << "False" << endl;
        return 0;
    }

    int freq[256] = {0};

    for(int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }

    for(int i = 0; i < t.length(); i++){
        freq[t[i]]--;
    }

    for(int i = 0; i < 256; i++){
        if(freq[i] != 0){
            cout << "False" << endl;
            return 0;
        }
    }

    cout << "True" << endl;
    return 0;
}