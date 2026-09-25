#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void printSumOfArray(int arr[], int n, int &sum){
        if(n == 0){
            return;
        }

        sum = sum + arr[n - 1];
        return printSumOfArray(arr, n - 1, sum);
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    Solution::printSumOfArray(arr, n, sum);
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
}