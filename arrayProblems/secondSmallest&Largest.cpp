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

    int small = INT_MAX;
    int second_small = INT_MAX;
    int large = INT_MIN;
    int second_large = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        } else if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }

    cout << "Second smallest element is: " << second_small << endl;
    cout << "Second largest element is: " << second_large << endl;
    return 0;
}
