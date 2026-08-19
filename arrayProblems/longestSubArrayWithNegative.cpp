#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestSubarray(int arr[], int n){
        int max_length = 0;

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = sum + arr[j];
                if(sum == 0){
                    max_length = max(max_length, j - i + 1);
                }
            }
        }

        return max_length;
    }

    int longestSubArrayUsingHash(int arr[], int n){
        // prefix sum approach so unordered_map will store <sum, index>
        unordered_map<int, int> mpp;
        int sum = 0;
        int max_length = 0;
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];

            if(sum == 0){
                max_length = i + 1;
            }

            if(mpp.find(sum) != mpp.end()){
                max_length = max(max_length, i - mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }

        return max_length;
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of an array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    int maxLenght = obj.longestSubarray(arr, n);
    int maxLenghtUsingHash = obj.longestSubArrayUsingHash(arr, n);

    cout << "The length of longest subarray with sum 0 is: " << maxLenght << endl;
    cout << "The length of longest subarray with sum 0 is: " << maxLenghtUsingHash << endl;

    return 0;
}