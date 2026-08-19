#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maximumConsecutiveOnes(int arr[], int n){
        int count = 0;
        int max_count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                count++;
                max_count = max(count, max_count);
            } else{
                count = 0;
            }
        }

        return max_count;
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of an array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    int count = obj.maximumConsecutiveOnes(arr, n);

    cout << "The maximum consecutive ones are: " << count << endl;

    return 0;
}