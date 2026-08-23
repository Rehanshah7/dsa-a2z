#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestConsecutiveLength(int arr[], int n){
        int length = 0;

        // pick each element and find its consecutive length
        for (int i = 0; i < n; i++){
            int current = arr[i];
            int count = 1;

            // search the next consecutive elements
            for (int j = 0; j < n; j++){
                if (arr[j] == current + 1){
                    count++;
                    current = arr[j];
                }
            }

            // update the maximum length
            length = max(length, count);
        }
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
    cout << "The longest consecutive length is: " << count << endl;
    return 0;
}