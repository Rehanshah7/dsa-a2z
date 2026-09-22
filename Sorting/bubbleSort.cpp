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

    // Bubble Sort Algorithm
    for(int i = 0; i < n - 1; i++){
        int didswap = 0; // Flag to check if any swap happened in this pass
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1; // Set the flag to indicate a swap occurred
            }
        }
        if(didswap == 0){
            break; // If no swap occurred, the array is already sorted
        }
    }

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
// 1. First iterate through all the number in an array starting from i=0 to n-1 as the last number will already be sorted
// 2. Second iterate through the array from j=0 to n-i-1 (because the first i numbers are already sorted) as the last number will already be sorted
// 3. Compare the next number with the previous number
//    here if the next number is greater than the previous number then swap them
// 4. Take the doswap variable as boolean value and initialize it to 0
// 5. If the swap happens then change the value of doswap to 1
// 6. After each iteration check if the value of doswap is 0 or not
// 7. If the value of doswap is 0 then break the loop as the array is already sorted
// 8. Print the sorted array