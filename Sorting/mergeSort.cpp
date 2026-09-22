#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int i = left; //starting index of left subarray, 
    int j = mid + 1; //starting index of right subarrays

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

    int mid = left + (right  - left) / 2; // It is used when the array is of huge size and it helps in reducing the array exceeds the stack size
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

// pseudo code
// 1. Base condition is when the array has one element or when left crosses the right pointer, it is already sorted
// 2. Take the mid as the middle element of the array from mid = left + (right - left) / 2
//    here this formula is used to avoid integer overflow and it helps in reducing the array exceeds the stack size
// 3. now call the mergeSort function to sort the left and right subarrays
// 4. now call the merge function to merge the sorted left and right subarrays
// 5. Take the i pointer at left, j pointer at mid + 1 and k pointer at left
// 6. compare the elements of the left and right subarrays and merge them in sorted order
// 7. copy the remaining elements of the left and right subarrays if any
// 8. copy the merged elements from the temporary array to the original array

/*
================================================================================
DRY RUN TRACE FOR ARRAY: [8, 3, 5, 4, 7, 6, 1, 2] (Size n = 8)
================================================================================

1. THE DIVIDE PHASE (Recursive Splits)
--------------------------------------
The array is recursively split into halves until single-element subarrays are reached:
- mergeSort(0, 7) -> mid = 3. Splits into Left [0..3] and Right [4..7]
  - Left [0..3]: [8, 3, 5, 4] -> mid = 1. Splits into [0..1] and [2..3]
    - [0..1]: [8, 3] -> mid = 0. Splits into [0..0] ([8]) and [1..1] ([3]) -> BASE CASES REACHED
    - [2..3]: [5, 4] -> mid = 2. Splits into [2..2] ([5]) and [3..3] ([4]) -> BASE CASES REACHED
  - Right [4..7]: [7, 6, 1, 2] -> mid = 5. Splits into [4..5] and [6..7]
    - [4..5]: [7, 6] -> mid = 4. Splits into [4..4] ([7]) and [5..5] ([6]) -> BASE CASES REACHED
    - [6..7]: [1, 2] -> mid = 6. Splits into [6..6] ([1]) and [7..7] ([2]) -> BASE CASES REACHED

2. THE CONQUER & MERGE PHASE (Step-by-Step)
-------------------------------------------
Now, the recursion unrolls, and the merge() function combines the sorted pieces.

STEP 2.1: merge(arr, left=0, mid=0, right=1)
- Subarrays to merge: Left, Right [3]
- Comparison loop: 3 < 8 -> temp vector gets [3, 8]
- Copy back loop: k goes from 0 to 1.
  - k = 0: arr[0] = temp[0 - 0] -> arr[0] = 3
  - k = 1: arr[1] = temp[1 - 0] -> arr[1] = 8
- Current Array State: [3, 8, 5, 4, 7, 6, 1, 2]

STEP 2.2: merge(arr, left=2, mid=2, right=3)
- Subarrays to merge: Left, Right [4]
- Comparison loop: 4 < 5 -> temp vector gets [4, 5]
- Copy back loop: k goes from 2 to 3 (left = 2).
  - k = 2: arr[2] = temp[2 - 2] -> arr[2] = 4
  - k = 3: arr[3] = temp[3 - 2] -> arr[3] = 5
- Current Array State: [3, 8, 4, 5, 7, 6, 1, 2]

STEP 2.3: merge(arr, left=0, mid=1, right=3)
- Subarrays to merge: Left, Right [4, 5]
- Comparison loop:
  - Compare 3 and 4 -> temp gets [3]
  - Compare 8 and 4 -> temp gets [3, 4]
  - Compare 8 and 5 -> temp gets [3, 4, 5]
  - Leftover 8 is pushed -> temp gets [3, 4, 5, 8]
- Copy back loop: k goes from 0 to 3 (left = 0).
  - Translates k [0, 1, 2, 3] directly to temp [0, 1, 2, 3] because (k - 0) = k.
- Current Array State: [3, 4, 5, 8, 7, 6, 1, 2]

STEP 2.4: merge(arr, left=4, mid=4, right=5)
- Subarrays to merge: Left, Right [6]
- Comparison loop: 6 < 7 -> temp vector gets [6, 7]
- Copy back loop: k goes from 4 to 5 (left = 4).
  - k = 4: arr[4] = temp[4 - 4] -> arr[4] = 6
  - k = 5: arr[5] = temp[5 - 4] -> arr[5] = 7
- Current Array State: [3, 4, 5, 8, 6, 7, 1, 2]

STEP 2.5: merge(arr, left=6, mid=6, right=7)
- Subarrays to merge: Left, Right [2]
- Comparison loop: 1 < 2 -> temp vector gets [1, 2]
- Copy back loop: k goes from 6 to 7 (left = 6).
  - k = 6: arr[6] = temp[6 - 6] -> arr[6] = 1
  - k = 7: arr[7] = temp[7 - 6] -> arr[7] = 2
- Current Array State: [3, 4, 5, 8, 6, 7, 1, 2]

STEP 2.6: merge(arr, left=4, mid=5, right=7)
- Subarrays to merge: Left, Right [1, 2]
- Comparison loop:
  - Compare 6 and 1 -> temp gets [1]
  - Compare 6 and 2 -> temp gets [1, 2]
  - Right side exhausted. Leftovers [6, 7] are pushed -> temp gets [1, 2, 6, 7]
- Copy back loop: k goes from 4 to 7 (left = 4).
  - k = 4: arr[4] = temp[4 - 4] -> arr[4] = 1
  - k = 5: arr[5] = temp[5 - 4] -> arr[5] = 2
  - k = 6: arr[6] = temp[6 - 4] -> arr[6] = 6
  - k = 7: arr[7] = temp[7 - 4] -> arr[7] = 7
- Current Array State: [3, 4, 5, 8, 1, 2, 6, 7]

STEP 2.7: FINAL MERGE -> merge(arr, left=0, mid=3, right=7)
- Subarrays to merge: Left, Right [1, 2, 6, 7]
- Comparison loop:
  - Compare 3 and 1 -> temp gets [1]
  - Compare 3 and 2 -> temp gets [1, 2]
  - Compare 3 and 6 -> temp gets [1, 2, 3]
  - Compare 4 and 6 -> temp gets [1, 2, 3, 4]
  - Compare 5 and 6 -> temp gets [1, 2, 3, 4, 5]
  - Compare 8 and 6 -> temp gets [1, 2, 3, 4, 5, 6]
  - Compare 8 and 7 -> temp gets [1, 2, 3, 4, 5, 6, 7]
  - Leftover 8 is pushed -> temp gets [1, 2, 3, 4, 5, 6, 7, 8]
- Copy back loop: k goes from 0 to 7 (left = 0).
  - Maps elements back into the original array slots 0 through 7.

FINAL SORTED ARRAY STATE: [1, 2, 3, 4, 5, 6, 7, 8]
================================================================================
*/
