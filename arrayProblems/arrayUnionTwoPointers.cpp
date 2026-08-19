#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> unionArray(int arr1[], int arr2[], int n, int m){
        // 2 pointers starting with zero
        int i = 0;
        int j = 0;

        // sort the arrays first
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);

        //vector to store the union elements
        vector<int> unionArray;

        // merge the arrays
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                if(unionArray.empty() || unionArray.back() != arr1[i]){
                    unionArray.push_back(arr1[i]);
                }
                i++;
            } else if(arr1[i] > arr2[j]){
                if(unionArray.empty() || unionArray.back() != arr2[j]){
                    unionArray.push_back(arr2[j]);
                }
                j++;
            } else{
                if(unionArray.empty() || unionArray.back() != arr1[i]){
                    unionArray.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }

        while(i < n){
            if(unionArray.empty() || unionArray.back() != arr1[i]){
                unionArray.push_back(arr1[i]);
            }
            i++;
        }

        while(j < m){
            if(unionArray.empty() || unionArray.back() != arr2[j]){
                unionArray.push_back(arr2[j]);
            }
            j++;
        }

        return unionArray;
    }
};

int main(){
    int n;
    int m;
    cout << "Enter the size of first array: ";
    cin >> n;

    cout << "Enter the size of second array: ";
    cin >> m;

    cout << "Enter the elements of first array: ";
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cout << "Enter the elements of second array: ";
    int arr2[m];
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    cout << endl;

    Solution obj;
    vector<int> unionArray = obj.unionArray(arr1, arr2, n, m);

    for(auto &it: unionArray){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}