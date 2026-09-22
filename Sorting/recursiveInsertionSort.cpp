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

// pseudo code
// 1. Base condition is when the array has one element, it is already sorted
// 2. Make the recursive call to sort the first n-1 elements
// 3. A variable key is initialized to the last element of the array
// 4. A variable j is initialized to n-2
// 5. Start a while loop based on the condition that j >= 0 and arr[j] > key
//    here if the previous number is greater than the current number then assign the previous number to the current number and decremnt the j.
// 6. Assign the key to the current number
// 7. Print the sorted array