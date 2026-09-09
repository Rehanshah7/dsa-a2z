#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0}; // Initialize the hash array with zeros
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1; // Increment the count for the corresponding number
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;
        cout << "The frequency of " << number << " is: " << hash[number] << endl;
    }
}

// 5 --> Total numbers in the array
// 1 3 2 1 3 --> Array elements
// 5 --> Total query numbers
// 1 --> query 1
// 2 --> query 2
// 4
// 3
// 12 --> query n

// pseudo code
// 1. Take the number of elements in an array and construct an array of that size.
// 2. Take the number of queries as an input and loop through the each queries and ask the user to input the query element and check the frequency of that element in the array using a hash array.
// 3. Create a any size of hash array and inititalize the hash array with zeros. (Index starting from 0 to any size of hash array)
// 4. loop through the array and increment the count of each element in the hash array using the element as an index.