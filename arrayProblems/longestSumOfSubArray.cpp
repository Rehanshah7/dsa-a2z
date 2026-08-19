#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestSubarray(int arr[], int n, int k){
        int maxLenght = 0;
        for(int startIndex = 0; startIndex < n; startIndex++){
            for(int endIndex = startIndex; endIndex < n; endIndex++){
                int sum = 0;
                for(int i = startIndex; i <= endIndex; i++){
                    sum = sum + arr[i];
                }
                if(sum == k){
                    maxLenght = max(maxLenght, endIndex - startIndex + 1);
                }
            }
        }   

        return maxLenght;
    }

    int longestSubarrayUsingPointers(int arr[], int n, int k){
        int maxLenght = 0;
        int startIndex = 0;
        int endIndex = 0;
        int sum = arr[0];

        while(endIndex < n){

            while(sum > k && startIndex <= endIndex){
                sum = sum - arr[startIndex];
                startIndex++;
            }

            if(sum == k){
                maxLenght = max(maxLenght, endIndex - startIndex + 1);
            }
            
            endIndex++;
            if(endIndex < n) sum = sum + arr[endIndex];
        }

        return maxLenght;
    }
};

int main(){
    int n;
    int k;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the value of k(sum of longest subarray): ";
    cin >> k;

    cout << "Enter the elements of an array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    int maxLenght = obj.longestSubarray(arr, n, k);
    int maxLenghtUsingPointers = obj.longestSubarrayUsingPointers(arr, n, k);

    cout << "The length of longest subarray with sum " << k << " is: " << maxLenght << endl;
    cout << "The length of longest subarray with sum " << k << " is: " << maxLenghtUsingPointers << endl;

    return 0;
}