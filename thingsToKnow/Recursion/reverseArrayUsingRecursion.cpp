#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void reverseArray(int n, int arr[], vector<int> &v){
        if(n <= 0){
            return;
        }

        v.push_back(arr[n - 1]);
        return reverseArray(n - 1, arr, v);
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> v;

    Solution::reverseArray(n, arr, v);

    cout << "Reversed Array: ";
    for(int num : v){
        cout << num << " ";
    }

    return 0;
}

// pseudo code
// 1. Base condition is when n is less than or equal to 0, return from the function
// 2. Add the last element of the array to the vector
// 3. Recursively call the function with n - 1