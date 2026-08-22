#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int rearrangeSign(int arr[], int n){
        int pos[n/2];
        int neg[n/2];
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos[i] = arr[i];
            } else {
                neg[i] = arr[i];
            }
        }

        for(int i = 0; i < n/2; i++){
            cout << pos[i] << " ";
        }

        for(int i = n/2; i < n; i++){
            cout << neg[i] << " ";
        }

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                arr[i] = pos[i];
            }
        }

        return 0;
    }
};

int main(){
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;

    cout << "Enter the elements of first array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    obj.rearrangeSign(arr, n);


    return 0;
}