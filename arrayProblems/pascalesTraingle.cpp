#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        vector<vector<int>> pascaleTriangle(int n){
            // result vector to hold all the rows
            vector<vector<int>> triangle;
            for(int i = 0; i < n; i++){
                // create a row with the size i+1 and fill it with 1
                vector<int> row(i+1, 1);
                for(int j = 1; j < i; j++){
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
                triangle.push_back(row);
            }

            return triangle;
        }

        void pascaleTriangleBetterApproach(int n){
            for(int i = 0; i < n; i++){
                long long current = 1;
                for(int j = 0; j <= i; j++){
                    cout << current << " ";
                    current = current * (i - j) / (j + 1);
                }
                cout << endl;
            }
        }

        void pascaleTriangleBetterAppraochOne(int n){
            vector<int> row(n, 0);
            row[0] = 1;
            for(int i = 0; i < n; i++){
               for(int j = i; j > 0; j--){
                row[j] = row[j] + row[j - 1];
               }

               for(int j = 0; j <= i; j++){
                cout << row[j] << " ";
               }
               cout << endl;
            }
        }
};

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    Solution obj;
    vector<vector<int>> ans = obj.pascaleTriangle(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    obj.pascaleTriangleBetterApproach(n);
    cout << endl;
    obj.pascaleTriangleBetterAppraochOne(n);
    return 0;
}