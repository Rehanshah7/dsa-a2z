#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    bool isSorted = true;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }

        isSorted = true;
    }

    if(isSorted) cout << "Array is sorted!" << endl;
    else cout << "Array is not sorted!" << endl;
    
    return 0;
}