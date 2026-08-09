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