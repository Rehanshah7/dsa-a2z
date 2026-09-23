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

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    cout << "Sum of Array elements is: " << sum << endl;
    return 0;
}