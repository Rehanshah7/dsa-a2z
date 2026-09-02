#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pascalesTriangle(int n){
        vector<int> row(n, 0);
        row[0] = 1;
        for(int i = 0; i< n; i++){
            for(int j = i; j > 0; j--){
                row[j] = row[j] + row[j - 1];
            }

            for(int j = 0; j <= i; j++){
                cout << row[j] << " ";
            }
            cout << endl;
        }
    }

    // function to find the element using binomial coefficient
    int searchElement(int n, int r, int c){
        // 0 based indexing
        int N = r - 1; // number of rows
        int K = c - 1; // number of columns

        // initialize result with 1
        long long result = 1;

        //loop till the column value K to calculate the binomial coefficient
        for(int i = 0; i < K; i++){
            // calculate the binomial coefficient
            result = result * (N - i);
            result = result / (i + 1);

            // result = result * (N - i) / (i + 1);
        }

        return result;
    }
};

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int r;
    cout << "Enter the row of the element to be searched: ";
    cin >> r;

    int c;
    cout << "Enter the column of the element to be searched: ";
    cin >> c;

    Solution obj;
    obj.pascalesTriangle(n);
    cout << endl;
    int ans = obj.searchElement(n, r, c);

    cout << "The element at (" << r << ", " << c << ") is: " << ans << endl;
    return 0;
}