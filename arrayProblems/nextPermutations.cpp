#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int next_permutation(int arr[], int n){
        int index = -1;
        // Find the first index from the right where arr[i] < arr[i+1]: Find the dip
        for (int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }

        // after finding the index, find the first element from the right which is greater than arr[index] and swap them
        for (int i = n - 1; i > index; i--){
            if(arr[i] > arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Reverse the elements from index + 1 to n - 1 to get the next smallest permutation
        reverse(arr + index + 1, arr + n);

        // If the array is in descending order, then the next permutation is the smallest permutation, which is the array in ascending order
        if(index == -1){
            reverse(arr, arr + n);
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

        return 0;
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
    obj.next_permutation(arr, n);

    return 0;
}