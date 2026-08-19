#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> numberAppearance(int arr[], int n){
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }

        for(auto &it: freq){
            cout << it.first << "-->" << it.second << endl;
        }

        for(auto &it: freq){
            if(it.second == 1){
                cout << "Element that appears once: " << it.first << endl;
            }
        }

        return {};
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

    Solution obj;
    obj.numberAppearance(arr, n);

    return 0;
}