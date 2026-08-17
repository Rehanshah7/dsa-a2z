#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[], int n, int d){
    int dummy_array[n];

    for(int i = 1; i < n; i++){
        dummy_array[i - 1] = arr[i];
    }
    dummy_array[n - 1] = arr[0];

    cout << "Array after rotating left by " << d << " position(s): ";
    for(int  i = 0; i < n; i++){
        cout << dummy_array[i] << " ";
    }
    cout << endl;
}

void optimalApproachRotateLeft(int arr[], int n, int d){
    int temp = arr[0];

    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    cout << "Array after rotating left by with optimal approach " << d << " position(s): ";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int  i = 0; i < n; i++){
        cin >> arr[i];
    }

    rotateLeft(arr, n, 1); // Rotating the array to the left by 1 position
    optimalApproachRotateLeft(arr, n, 1); // Rotating the array to the left by 1 position using optimal approach
    return 0;
}