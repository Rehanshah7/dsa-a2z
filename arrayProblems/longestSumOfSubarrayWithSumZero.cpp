#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int longestSubarray(vector<int> arr, int n){
        int maxLength = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += arr[j];
                if(sum == 0){
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }
        return maxLength;
    }

    int longestSubarrayBetterApproach(vector<int> arr, int n){
        int maxLength = 0;
        unordered_map<int, int> prefixSumMap;
        int prefixSum = 0;
        for(int i = 0; i < n; i++){
            prefixSum += arr[i];
            if(prefixSum == 0){
                maxLength = i + 1;
            }
            if(prefixSumMap.find(prefixSum) != prefixSumMap.end()){
                maxLength = max(maxLength, i - prefixSumMap[prefixSum]);
            } else{
                prefixSumMap[prefixSum] = i;
            }
        }
        return maxLength;
    }
};


int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of an array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    int maxLength = obj.longestSubarray(arr, n);
    cout << "The length of the longest subarray with sum 0 is: " << maxLength << endl;
    return 0;
}