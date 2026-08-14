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

    // Check if the array is sorted
    bool isArraySorted = true;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            isArraySorted = false;
            break;
        }
        i++;
    }

    if(isArraySorted){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
