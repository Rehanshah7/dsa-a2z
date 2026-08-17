#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            cout << "Number found at index: " << i << endl;
            return;
        }
    }
    cout << "Number not found in the array" << endl;
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

    int num;
    cout << "Enter the number you want to search: ";
    cin >> num;

    linearSearch(arr, n, num);
    return 0;
}