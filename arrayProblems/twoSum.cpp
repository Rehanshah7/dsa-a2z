#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int twoSum(int arr[], int n, int k){
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i + 1; j < n; j++){
                sum = arr[i] + arr[j];
                if(sum == k){
                    cout << arr[i] << " " << arr[j] << endl;
                    break;
                }
            }
        }

        return {};
    }

    vector<int> twoSumUsingHash(int arr[], int n, int k){
        map<int, int> mpp;
        for(int i = 0; i < n; i++){
            int remaining = k - arr[i];
            if(mpp.find(remaining) != mpp.end()){
                cout << "The pair of indices are: " << i << " " << mpp[remaining] << endl;
                return {i, mpp[remaining]};
            }
            mpp[arr[i]] = i;
        }

        cout << "No such pair found" << endl;
        return {-1, -1};
    }

    vector<int> twoSumUsingPointers(int arr[], int n, int k){
        sort(arr, arr + n);
        int left = 0;
        int right = n - 1;
        int sum = 0;
        cout << "Inside the loop" << endl;
        while(left < right){
            sum = arr[left] + arr[right];
            cout << "Sum: " << sum << endl;
            if(k > sum){
                left++;
            }
            else if(k < sum){
                right--;
            }
            else{
                cout << "The pair of indices are: " << left << " " << right << endl;
                return {left, right};
            }
        }
        return {-1, -1};
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "Enter the elements of an array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    obj.twoSum(arr, n, target);
    obj.twoSumUsingHash(arr, n, target);
    obj.twoSumUsingPointers(arr, n, target);

    return 0;
}