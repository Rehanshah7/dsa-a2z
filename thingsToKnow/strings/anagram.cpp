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

// pseudo code
// 1. Take two strings as input
// 2. Check both the string should have same length or not
// 3. Initialize the freq array with 256 length
// 4. Traverse till the last of first string and increase the freq value as per the current string character
// 5. Traverse till the last of second string and decrease the freq value as per the current string character
// 6. Traverse through all the 256 character of freq and if any char has freq 1 then the anagram would be False or else True