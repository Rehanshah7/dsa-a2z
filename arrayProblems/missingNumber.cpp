#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int missingNumber(int arr[], int n){
        vector<int> hash(n + 1, 0);
        for(int i = 0; i < n; i++){
            hash[arr[i]]++;
        }

        for(int i = 0; i < n + 1; i++){
            if(hash[i] == 0){
                cout << "The missing number is: " << i << endl;
                return i;
            }
        }

        return -1;
    }

    void missingNumberUsingSum(int arr[], int n){
        int total = (n * (n + 1)) / 2;
        n = n + 1;
        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            sum = sum + arr[i];
        }
        cout << "The missing number is: " << total - sum << endl;
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
    obj.missingNumber(arr, n);
    obj.missingNumberUsingSum(arr, n);

    return 0;
}