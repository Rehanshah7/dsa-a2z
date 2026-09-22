#include<bits/stdc++.h>
using namespace std;

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

    // Insertion Sort Algorithm
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (when the array is already sorted)
// Space Complexity: O(1) as we are using only a constant amount of space

// pseudo code
// 1. First loop start from i=1 to n-1 as the previous number will be used for the comparison
// 2. Store the current element in the key variable
// 3. j should be initialized to i-1
// 4. Start a while loop based on the condition that j >= 0 and arr[j] > key
//    here if the previous number is greater than the current number then assign the previous number to the current number and decremnt the j.
// 5. Assign the key to the current number
// 6. Print the sorted array