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

    int hash[26] = {0}; // Initialize the hash array with zeros
    for (int i = 0; i < n; i++){
        hash[arr[i] - 'a']++;
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

// pseudo code
// 1. Take the number of elements in an array and construct an array of that size.
// 2. Take the number of queries as an input and loop through the each queries and ask the user to input the query element and check the frequency of that element in the array using a hash array.
// 3. Create a hash array of size 26 as the alphabets are of size 26 and inititalize the hash array with zeros.
// 4. loop through the array and and substract "a" with the current element to get the index of the hash array and increment the count of that index.