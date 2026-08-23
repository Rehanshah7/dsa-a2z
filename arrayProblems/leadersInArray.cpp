#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int leadersInArray(int arr[], int n){
        bool isLeader;
        for (int i = 0; i < n; i++){
            isLeader = true;
            for (int j = i + 1; j < n; j++){
                if(arr[j] > arr[i]){
                    isLeader = false;
                    break;
                }
            }
            if(isLeader){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        return 0;
    }

    int optimalLeadersInArray(int arr[], int n){
        int maxFromRight = arr[n - 1];
        cout << arr[n - 1] << " ";
        for (int i = n - 2; i >= 0; i--){
            if(arr[i] > maxFromRight){
                cout << arr[i] << " ";
                maxFromRight = arr[i];
            }
        }
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
    obj.leadersInArray(arr, n);
    obj.optimalLeadersInArray(arr, n);

    return 0;
}