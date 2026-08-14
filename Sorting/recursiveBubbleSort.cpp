#include<bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int n){
    if(n == 1) return; //base case: if the array has one element, it is already sorted

    bool isSwapped = false; // Flag to check if any swap happened in this pass
    // Bubble Sort Algorithm
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
            isSwapped = true; // Set the flag to indicate a swap occurred
        }
    }

    if(!isSwapped) return; // If no swap occurred, the array is already sorted)
    recursiveBubbleSort(arr, n - 1); //recursively sort the remaining elements
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

    recursiveBubbleSort(arr, n - 1);

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n^2) in all cases (Best, Average, Worst)
// Space Complexity: O(1) as we are using only a constant amount of space