#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    char arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[256] = {0}; // Initialize the hash array with zeros
    for (int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

        int q;
        cout << "Enter the number of queries: ";
        cin >> q;
        while (q--)
        {
            char str;
            cout << "Enter the string to check its frequency: ";
            cin >> str;
            cout << "The frequency of " << str << " is: " << hash[str - 'a'] << endl;
        }
}

// 9 --> Total numbers in the array
// abcdabehf --> Array string elements
// 9 --> Total query numbers
// a --> query 1
// g --> query 2
// h
// b
// e
// a
// d
// b
// c --> query n