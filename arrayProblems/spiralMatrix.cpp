#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void printSpiralMatrix(vector<vector<int>>& arr, int n){
        vector<int> spiralMatrix;

        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = n - 1;

        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++){
            spiralMatrix.push_back(arr[top][i]);
            }
            top++;

            for(int i = top; i <= bottom; i++){
                spiralMatrix.push_back(arr[i][right]);
            }
            right--;

            for(int i = right; i >= left; i--){
                spiralMatrix.push_back(arr[bottom][i]);
            }
            bottom--;

            for(int i = bottom; i >= top; i--){
                spiralMatrix.push_back(arr[i][left]);
            }
            left++;
        }


        cout << "Spiral Matrix: ";
        for(int i = 0; i < spiralMatrix.size(); i++){
            cout << spiralMatrix[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int n;
    cout << "Enter the number of rows in the array: ";
    cin >> n; 

    cout << "Enter the elements in an array: ";
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    Solution obj;
    obj.printSpiralMatrix(arr, n);
    return 0;
}