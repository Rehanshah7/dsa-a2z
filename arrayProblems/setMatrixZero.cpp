#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void setMatrixZero(vector<vector<int>>& arr, int n, int m){
        // loop through the rows of an array
        for(int i = 0; i < n; i++){
            // loop through the columns of an array
            for(int j = 0; j < m; j++){

                // if the element is 0, set all the elements in the row and column to -1
                if(arr[i][j] == 0){
                    // set all the elements in the row -1
                    for(int k = 0; k < n; k++){
                        arr[k][j] = -1;
                    }

                    // set all the elements in the column -1
                    for(int l = 0; l < m; l++){
                        arr[i][l] = -1;
                    }
                }
            }
        }

        // loop through the rows of an array and columns of an array and replace -1 with 0
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == -1){
                    arr[i][j] = 0;
                }
            }
        }

        cout << "The matrix after setting all the zeros to -1 is:" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void setMatrixZeroBetterApproach(vector<vector<int>>& arr, int n, int m){
        vector<int> trackRows(n, 0);
        vector<int> trackColumns(m, 0);
        // loop through the rows of an array
        for(int i = 0; i < n; i++){
            // loop through the columns of an array
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 0){
                    trackRows[i] = -1;
                    trackColumns[j] = -1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(trackRows[i] == -1 || trackColumns[j] == -1){
                    arr[i][j] = 0;
                }
            }
        }

        cout << "The matrix after setting all the zeros to -1 with better approach is:" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void setMatrixZeroOptimalApproach(vector<vector<int>>& arr, int n, int m){
        bool firstRowZero = false;
        bool firstColumnZero = false;
        // loop through the first rows of an array
        for(int i = 0; i < n; i++){
            if(arr[i][0] == 0){
                firstRowZero = true;
                break;
            }
        }
        
        // loop through the first columns of an array
        for(int j = 0; j < m; j++){
            if(arr[0][j] == 0){
                firstColumnZero = true;
                break;
            }
        }

        // traverse everything except first rows and first columns
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(arr[i][j] == 0){
                    arr[i][0] = 0;
                    arr[0][j] = 0;
                }
            }
        }

        // traverse the array except first rows and first columns
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(arr[i][0] == 0 || arr[0][j] == 0){
                    arr[i][j] = 0;
                }
            }
        }

        // check if the first row needs to be set to zero
        if(firstRowZero){
            for(int j = 0; j < m; j++){
                arr[0][j] = 0;
            }
        }

        // check if the first column needs to be set to zero
        if(firstColumnZero){
            for(int i = 0; i < n; i++){
                arr[i][0] = 0;
            }
        }

        cout << "The matrix after setting all the zeros to -1 with optimal approach is:" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main(){
    int n;
    cout << "Enter the number of rows in the array: ";
    cin >> n;

    int m;
    cout << "Enter the number of columns in the array: ";
    cin >> m;   

    cout << "Enter the elements in an array: ";
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    Solution obj;
    // obj.setMatrixZero(arr, n, m);
    // obj.setMatrixZeroBetterApproach(arr, n, m);
    obj.setMatrixZeroOptimalApproach(arr, n, m);

    return 0;
}