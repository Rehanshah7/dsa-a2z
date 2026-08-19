#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int majorityElement(int arr[], int n){
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }

            if(count > n/2){
                return arr[i];
            }
        }

        return -1;
    }

    int majorityElementWithHash(int arr[], int n){
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }

        for(auto it: freq){
            if(it.second > n/2){
                return it.first;
            }
        }

        return -1;
    }

    int majorityElementOptimalApproach(int arr[], int n){
        int count = 0;
        int element = 0;
        for(int i = 0; i < n; i++){
            if(count == 0){
                count = 1;
                element = arr[i];
            } else if(arr[i] == element){
                count++;
            } else{
                count--;
            }
        }

        int count1 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == element){
                count1++;
            }
        }

        if(count1 > n/2){
            return element;
        }

        return -1;
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
    int count = obj.majorityElement(arr, n);
    int countWithHash = obj.majorityElementWithHash(arr, n);
    int countOptimal = obj.majorityElementOptimalApproach(arr, n);

    cout << "The majority of elements in an array is: " << count << endl;
    cout << "The majority of elements in an array with hashing is: " << countWithHash << endl;
    cout << "The majority of elements in an array with optimal approach is: " << countOptimal << endl;

    return 0;
}