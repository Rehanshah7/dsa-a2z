#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low]; //choosing the first element as the pivot element
    int i = low + 1; //starting + 1 index of the array
    int j = high; //ending index of the array

    while(i <= j){
        while(i <= high && arr[i] < pivot) i++; //incrementing i until we find an element greater than or equal to the pivot
        while(j >= low && arr[j] > pivot) j--; //decrementing j until we find an element less than or equal to the pivot
        if(i < j){ //if i is less than j, we swap the elements at i and j
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]); //swapping the pivot element with the element at index j
    return j; //returning the index of the pivot element
}

void quickSort(int arr[], int low, int high){
    if(low >= high){
        return; //base case: if the array has one or zero elements, it is already sorted
    }

    int pivotElement = partition(arr, low, high); //partition the array and get the pivot element index
    quickSort(arr, low, pivotElement - 1); //recursively sort the elements before the pivot
    quickSort(arr, pivotElement + 1, high); //recursively sort the elements after the pivot
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

    quickSort(arr, 0, n - 1);

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