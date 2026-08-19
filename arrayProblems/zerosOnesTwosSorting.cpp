#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sorting(vector<int> arr, int n){
        map<int, int> freq;
        for(int i = 0; i < n; i++){
                freq[arr[i]]++;
        }

        int index = 0;
        for(auto it: freq){
            int value = it.first;
            int count = it.second;

            while(count--){
                arr[index] = value;
                index++;
            }
        }

        cout << "Array after sorting: ";
        for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

    int sortZeroOneTwoUsingCount(vector<int>& arr, int n){
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                count0++;
            } else if(arr[i] == 1){
                count1++;
            } else {
                count2++;
            }
        }

        int index = 0;
        while(count0--){
            arr[index] = 0;
            index++;
        }

        while(count1--){
            arr[index] = 1;
            index++;
        }

        while(count2--){
            arr[index] = 2;
            index++;
        }

        cout << "Array after sorting with original array: ";
        for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }

    void dutchNationalFlag(vector<int>& arr, int n){
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } else if(arr[mid] == 1){
                mid++;
            } else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }

        cout << "Array after dutch national flag sorting: ";
        for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of an array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    obj.sorting(arr, n);
    obj.sortZeroOneTwoUsingCount(arr, n);
    obj.dutchNationalFlag(arr, n);

    return 0;
}