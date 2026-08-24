#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // function to check if an element is present in an array
    int linearSearch(int arr[], int n, int target){
        for(int i = 0; i < n; i++){
            if(arr[i] == target){
                return true;;
            }
        }

        return false;
    }
    int longestConsecutiveLength(int arr[], int n){
        int length = 1;

        // check for each element
        for(int i = 0; i < n; i++){
            // check if the current element is the start of a consecutive sequence and update its count default to 1
            int current = arr[i];
            int count = 1;
            // check if the next element is present in the array
            while(linearSearch(arr, n, current + 1) == true){
                count++;
                current++;
            }

            // update the length
            length = max(length, count);
        }

        return length;
    }

    int longestConsectiveLengthBetterApproach(int arr[], int n){
        sort(arr, arr + n);
        int length = 1;
        int lastSmallerElement = arr[0];
        int count = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] - 1 == lastSmallerElement){
                count++;
                lastSmallerElement = arr[i];
            } else if(arr[i] != lastSmallerElement){
                count = 1;
                lastSmallerElement = arr[i];
            }

            length = max(length, count);
        }

        return length;
    }

    int longestConsecutiveLengthOptimalApproach(int arr[], int n){
        int length = 1;
        int count = 0;
        int current = arr[0];
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(arr[i]);
        }

        for(auto it: st){
            cout << it << " ";
        }

        for(auto it: st){
            if(st.find(it - 1) == st.end()){
                current = it;
                count = 1;
                while(st.find(current + 1) != st.end()){
                    count++;
                    current++;
                }
                length = max(length, count);
            }
        }
        cout << endl;

        return length;
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
    int count = obj.longestConsecutiveLength(arr, n);
    int countBetter = obj.longestConsectiveLengthBetterApproach(arr, n);
    int countOptimal = obj.longestConsecutiveLengthOptimalApproach(arr, n);
    cout << "The longest consecutive length is: " << count << endl;
    cout << "The longest consecutive length in better approach is: " << countBetter << endl;
    cout << "The longest consecutive length in optimal approach is: " << countOptimal << endl;
    return 0;
}