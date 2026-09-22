#include<bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int index, int key) {
    while(index >= 0 && arr[index] > key){
        arr[index + 1] = arr[index]; //shift the element to the right
        index--;
    }

    arr[index + 1] = key; //insert the key at the correct position
}

void optimalInsertionSort(int arr[], int n){
    if( n == 1) return; //base case: if the array has one element, it is already sorted

    optimalInsertionSort(arr, n - 1); //recursively sort the first n - 1 elements

    int key = arr[n - 1];
    int index = n - 2;

    insertElement(arr, index, key);
}

int main(){
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    optimalInsertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// pseudo code
// 1. First call the recursive function to sort the first n-1 elements and base case is when the array has one element return the array
// 2. A variable key is initialized to the last element of the array
// 3. A variable index is initialized to n-2
// 4. Call the insertElement function to insert the key at the correct position
// 5. In the insertElement function, while the index is greater than or equal to 0 and the element at the index is greater than the key, shift the element to the right
// 6. Insert the key at the correct position
// 7. Print the sorted array