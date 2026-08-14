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