#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> unionArrayWithSet(int arr1[], int arr2[], int n, int m){
        set<int> st;
        vector<int> unionArray;
        for(int i = 0; i < n; i++){
            st.insert(arr1[i]);
        }
        for(int i = 0; i < m; i++){
            st.insert(arr2[i]);
        }

        unionArray.assign(st.begin(), st.end());

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
    vector<int> unionArray = obj.unionArrayWithSet(arr1, arr2, n, m);

    for(auto &it: unionArray){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}