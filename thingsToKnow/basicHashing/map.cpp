#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    map<int, int> mpp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]] += 1; // Increment the count for the corresponding number
    }

    for(auto it : mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;
        cout << "The Frequency of " << number << " is: " << mpp[number] << endl;
    }
}

// 7 --> Total numbers in the array
// 1 2 3 1 2 2 12 --> Array elements
// 5 --> Total query numbers
// 1 --> query 1
// 2 --> query 2
// 3
// 4
// 12 --> query n

// pseudo code
// 1. Take the number of elements in an array and construct an array of that size
// 2. Inititalize a map to store the frequency of each element in the array.
// 3. Loop through the array and increment the count of each element in the map using the element as a key.
// 4. Take the number of queries as an input and loop through the each queries and ask the user to input the query element and check the frequency of that element in the map.