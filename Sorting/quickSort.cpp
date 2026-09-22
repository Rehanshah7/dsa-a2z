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

// pseudo code
// 1. Base condition is when low exceeds the high or the array only has one or less elements then the array is already sorted
// 2. Partition the array around a pivot element such that all the elements smaller than the pivot are on the left side of the pivot and all the elements greater than the pivot are on the right side of the pivot
// 3. Recursively call the quicksort function for the left subarray and the right subarray
// 4. Inside the partition function
//    here we have pivot element, i and j. i.e. pivot = arr[low], i = low + 1, j = high
//    a. increment i until we find an element greater than or equal to the pivot
//    b. decrement j until we find an element less than or equal to the pivot
//    c. if i < j, swap the elements at i and j
//    d. swap the pivot element with the element at index j
//    e. return the index of the pivot element
//    f. recursively call the quicksort function for the left subarray and the right subarray as pivot element is already returned
// 5. Print the sorted array