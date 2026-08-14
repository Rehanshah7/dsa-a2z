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

    // Find Largest
    int min = 0;
    for(int  i = 0; i < n; i++){
        if(arr[i] > arr[min]){
            min = i;
        }
    }

    cout << "Largest element is: " << arr[min] << endl;
    return 0;
}
