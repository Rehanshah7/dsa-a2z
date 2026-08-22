#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int stockBuySell(int arr[], int n){
        int max_profit = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
               int profit = arr[j] - arr[i];

               max_profit = max(max_profit, profit);
            }
        }

        return max_profit;
    }

    int stockBuySellOptimalApproach(int arr[], int n){
        int min_price = INT_MAX;
        int max_profit = 0;
        for(int i = 0; i < n; i++){
               if(arr[i] < min_price){
                    min_price = arr[i];
               }

               int profit = arr[i] - min_price;
               max_profit = max(max_profit, profit);
        }

        return max_profit;
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
    int max_sum = obj.stockBuySell(arr, n);
    int max_sum_optimal = obj.stockBuySellOptimalApproach(arr, n);

    cout << "The maximum profit is: " << max_sum << endl;
    cout << "The maximum profit with optimal approach is: " << max_sum_optimal << endl;

    return 0;
}