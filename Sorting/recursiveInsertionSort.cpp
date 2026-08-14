#include<bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(int arr[], int n){
    if(n == 1) return; //base case: if the array has one element, it is already sorted

    // Recursively sort the first n - 1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insertion Sort Algorithm
        int key = arr[n - 1];
        int j = n - 2;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

    recursiveInsertionSort(arr, n);

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