#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotateMatrix(vector<vector<int>> arr, int n){
        vector<vector<int>> rotatedArray(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                rotatedArray[j][n - i - 1] = arr[i][j];
            }
        }

        cout << "The rotated matrix is:" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << rotatedArray[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void rotateMatrixByOptimalApproach(vector<vector<int>> &arr, int n){
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }

            for(int i = 0; i < n; i++){
                reverse(arr[i].begin(), arr[i].end());
            }
        }

        cout << "The rotated matrix after transpose:" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of rows and columns in the array: ";
    cin >> n;

    cout << "Enter the elements in an array: ";
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "The matrix is:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    Solution obj;
    // obj.setMatrixZero(arr, n, m);
    // obj.setMatrixZeroBetterApproach(arr, n, m);
    obj.rotateMatrix(arr, n);
    obj.rotateMatrixByOptimalApproach(arr, n);

    return 0;
}