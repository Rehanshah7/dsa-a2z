#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countSubarray(int arr[], int n, int k){
        int count = 0;
        for(int i = 0; i< n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;
                for(int k = i; k <= j; k++){
                    sum = sum + arr[k];
                }

                if(sum == k){
                    count++;
                }
            }
        }

        return count;
    }

    int betterApproach(int arr[], int n, int k){
        int count = 0;
        for(int i = 0; i< n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = sum + arr[j];

                if(sum == k){
                    count++;
                }
            }
        }

        return count;
    }

    int optimalApproach(int arr[], int n, int k){
        int count = 0;
        int prefixSum = 0;
        map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        for(int i = 0; i < n; i++){
            prefixSum = prefixSum + arr[i];
            int remove = prefixSum - k;

            if(prefixSumCount.find(remove) != prefixSumCount.end()){
                count = count + prefixSumCount[remove];
            }
            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;
    int count = obj.countSubarray(arr, n, target);
    int count1 = obj.betterApproach(arr, n, target);
    int count2 = obj.optimalApproach(arr, n, target);

    cout << "Number of subarrays with given target sum: " << count << endl;
    cout << "Number of subarrays with given target sum: " << count1 << endl;
    cout << "Number of subarrays with given target sum: " << count2 << endl;
    return 0;
}