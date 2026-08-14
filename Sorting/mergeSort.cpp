#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int i = left; //starting index of left subarray, 
    int j = mid + 1; //starting index of left and right subarrays

    vector<int> temp; //temporary array to store merged elements
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= right){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = left; k <= right; k++){
        arr[k] = temp[k - left]; //copying the elements from temporary array to original array
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right){
        return; //base case: if the array has one or zero elements, it is already sorted
    }

    int mid = left + (right  - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main(){
    // Input the size of an array
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    // Construct the array
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n log n) in all cases (Best, Average, Worst)
// Space Complexity: O(1) as we are using only a constant amount of space