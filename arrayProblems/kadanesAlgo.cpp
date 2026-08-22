#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kadanesAlgo(int arr[], int n){
        int max_sum = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;

                for(int k = i; k <= j; k++){
                    sum = sum + arr[k];
                }

                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }

    int kadanesAlgoBetterApproach(int arr[], int n){
        int max_sum = INT_MIN;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = sum + arr[j];
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }

    int kadanesAlgoOptimalApproach(int arr[], int n){
        int max_sum = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];
            if(sum < 0){
                sum = 0;
            }
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};

int main(){
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;

    cout << "Enter the elements of first array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    int max_sum = obj.kadanesAlgo(arr, n);
    int max_sum_better = obj.kadanesAlgoBetterApproach(arr, n);
    int max_sum_optimal = obj.kadanesAlgoOptimalApproach(arr, n);

    cout << "The maximum sum of subarray is: " << max_sum << endl;
    cout << "The maximum sum of subarray with better approach is: " << max_sum_better << endl;
    cout << "The maximum sum of subarray with optimal approach is: " << max_sum_optimal << endl;

    return 0;
}