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