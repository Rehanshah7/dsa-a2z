#include<bits/stdc++.h>
using namespace std;

void rotateRight(int arr[], int n, int d){
    d = d % n; // To handle cases where d is greater than n
    int dummy_array[n];

    for(int i = 0;i < n - d; i++){
        dummy_array[i + d] = arr[i];
    }
    for(int i = n - d; i < n; i++){
        dummy_array[i - (n - d)] = arr[i];
    }

    cout << "Array after rotating right by " << d << " position(s): ";
    for(int i = 0; i < n; i++){
        cout << dummy_array[i] << " ";
    }
    cout << endl;
}

void rotateLeft(int arr[], int n, int d){
    d = d % n; // To handle cases where d is greater than n
    int dummy_array[n];

    for(int i = d; i < n; i++){
        dummy_array[i - d] = arr[i];
    }
    for(int  i = 0; i < d; i++){
        dummy_array[n - d + i] = arr[i];
    }

    cout << "Array after rotating left by " << d << " position(s): ";
    for(int  i = 0; i < n; i++){
        cout << dummy_array[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// void optimalApproachRotateRight(int arr[], int n, int d){
//     d = d % n; // To handle cases where d is greater than n

//     reverseArray(arr, 0, n - 1);
//     reverseArray(arr, 0, d - 1);
//     reverseArray(arr, d, n - 1);

//     cout << "Array after rotating right by with optimal approach " << d << " position(s): ";
//     for(int  i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

void optimalApproachRotateLeft(int arr[], int n, int d){
    d = d % n; // To handle cases where d is greater than n

    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, n - d - 1);
    reverseArray(arr, n - d, n - 1);

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

    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int  i = 0; i < n; i++){
        cin >> arr[i];
    }

    rotateRight(arr, n, d); // Rotating the array to the right by d positions
    rotateLeft(arr, n, d); // Rotating the array to the left by d positions
    // optimalApproachRotateRight(arr, n, d); // Rotating the array to the right by d positions using optimal approach
    optimalApproachRotateLeft(arr, n, d); // Rotating the array to the left by d positions using optimal approach
    return 0;
}