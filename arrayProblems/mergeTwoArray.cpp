#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void mergeTwoArray(vector<int> arr1, int n, vector<int> arr2, int m){
        int i = n - 1; // Last index of valid elements of an arr1, in this case it will be index 3 representing element 5, because we have 4 valid elements in arr1, except 0
        int j = m - 1; // Last index of arr2
        int k = n + m - 1; // Last index of arr1, which is 6 in this case, because we have 7 elements in arr1

        while(j >= 0){
            if(i >= 0 && arr1[i] > arr2[j]){
                arr1[k] = arr1[i];
                i--;
            }
            else{
                arr2[k] = arr2[j];
                j--;
            }
            k--;
        }
    }
};


int main(){
    vector<int> arr1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int> arr2 = {-3, 1, 8};
    int n = 4; // Number of valid elements in arr1, except 0
    int m = 3; // Number of elements in arr2

    Solution obj;
    obj.mergeTwoArray(arr1, n, arr2, m);
    for(int x : arr1){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}