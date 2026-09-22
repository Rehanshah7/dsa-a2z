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

    // Selection Sort Algorithm
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
// 1. First iterate through all the numbers in an array starting from i=0 to n-1 as the last number will already be sorted
// 2. Take the i and store it in a variable min
// 3. Second iterate through the array from j=i+1 to n (because the first i numbers are already sorted)
// 4. Compare the next number with the minimum number
//    here if the next number is less than the minimum number then update the minimum number with the next number
// 5. Swap the minimum number with the current number
// 6. Print the sorted array