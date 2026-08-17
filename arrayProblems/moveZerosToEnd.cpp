#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int n){
    int dummy_array[n];
    int index = 0;
    for(int  i = 0; i < n; i++){
        if(arr[i] != 0){
            dummy_array[index] = arr[i];
            index++;
        }
    }

    cout << "Array before moving all zeros to the end: ";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int  i = 0; i < index; i++){
        arr[i] = dummy_array[i];
    }
    for(int i = index; i < n; i++){
        arr[i] = 0;
    }

    cout << "Array after moving all zeros to the end: ";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void optimalApproach(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1){
        return;
    }

    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after moving all zeros to the end: ";
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
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    moveZerosToEnd(arr, n); // Moving all zeros to the end of the array
    optimalApproach(arr, n); // Moving all zeros to the end of the array using optimal approach
    return 0;
}