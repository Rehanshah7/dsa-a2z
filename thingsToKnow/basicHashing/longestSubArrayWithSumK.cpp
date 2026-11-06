#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum: ";
    cin >> k;

    unordered_map<int, int> mpp;
    int prefixSum = 0;
    int maxLength = 0;

    for(int i = 0; i < n; i++){
        prefixSum += arr[i];

        if(prefixSum == k){
            maxLength = i + 1;
        }

        if(mpp.find(prefixSum - k) != mpp.end()){
            maxLength = max(maxLength, i - mpp[prefixSum - k]);
        }

        if(mpp.find(prefixSum) == mpp.end()){
            mpp[prefixSum] = i;
        }
    }

    cout << "The length of the longest subarray with sum " << k << " is " << maxLength << endl;
    return 0;
}

// pseudo code
// 1. Enter the size of an array and store it in variable n.
// 2. Create an array of size n and take input for its elements.
// 3. Enter the sum k for which we need to find the longest subarray.
// 4. Create an unordered_map to store the prefix sums and their corresponding indices.
// 5. Initialize prefixSum to 0 and maxLength to 0.
// 6. Loop through the array
//    a. Add the current element to prefixSum.
//    b. If prefixSum equals k, update maxLength to i + 1.
//    c. If (prefixSum - k) exists in the map, update maxLength to the maximum of maxLength and (i - index of (prefixSum - k)).
//    d. If prefixSum does not exist in the map, add it with its index.
// 7. After the loop, print the maxLength which is the length of the longest subarray with sum k.