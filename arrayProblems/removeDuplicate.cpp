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

    // Check if the sorted array has duplicates, if it does, then remove it
    if(n == 0 || n == 1){
        cout << "The array is sorted." << endl;
        return 0;
    }

    int i = 0;
    int j = 1;
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "The array after removing duplicates is: ";
    for(int k = 0; k <= i; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}
