#include<bits/stdc++.h>
using namespace std;

class ReverseArray{
    public: 
    vector<int> reverseArray(vector<int> arr){
        int n = arr.size();

        vector<int> reverseArray(n);
        for (int i = 0; i < n; i++){
            reverseArray[i] = arr[n - 1 - i];
        }

        return reverseArray;
    }
};

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    ReverseArray Obj;
    vector<int> reversedArr = Obj.reverseArray(arr);

    cout << "Reversed Array: ";
    for(int num : reversedArr){
        cout << num << " ";
    }

    return 0;
}

// pseudo code
// 1. Create a new array of the same size as the input array
// 2. Iterate through the input array and fill the new array with elements in reverse order of the input array
// 3. Return the new array