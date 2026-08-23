#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int rearrangeSign(int arr[], int n){
        int pos[n/2];
        int neg[n/2];
        int posIndex = 0;
        int negIndex = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos[posIndex++] = arr[i];
            } else {
                neg[negIndex++] = arr[i];
            }
        }

        cout << "After separating the positive and negative elements: " << endl;
        for (int i = 0; i < n/2; i++) {
            cout << pos[i] << " " << neg[i] << " ";
        }
        cout << endl;

        for(int i = 0; i < n/2; i++){
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }

        cout << "After rearranging the elements: " << endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

    int optimalRearrangeSign(int arr[], int n){
        int posIndex = 0;
        int negIndex = 1;
        for (int i = 0; i < n; i++){
            if(arr[i] > 0){
                arr[posIndex] = arr[i];
                posIndex += 2;
            } else {
                arr[negIndex] = arr[i];
                negIndex += 2;
            }
        }

        cout << "After rearranging the elements: " << endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
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
    obj.rearrangeSign(arr, n);
    obj.optimalRearrangeSign(arr, n);

    return 0;
}