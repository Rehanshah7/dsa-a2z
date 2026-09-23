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

    int reverseArray[n];
    for(int i = 0; i < n; i++){
        reverseArray[i] = arr[n - i - 1];
    }

    cout << "Reverse of Array is: " << endl;
    for(int i = 0; i < n; i++){
        cout << reverseArray[i] << " ";
    }
    cout << endl;
    return 0;
}