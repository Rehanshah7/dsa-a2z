#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int> arr, int n) {
        set<vector<int>> uniqueTriplets;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    sum = arr[i] + arr[j] + arr[k];
                    if(sum == 0){
                        vector<int> triplets = {arr[i], arr[j], arr[k]};
                        sort(triplets.begin(), triplets.end());
                        uniqueTriplets.insert(triplets);
                    }
                }
            }
        }
        return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
    }

    vector<vector<int>> threeSumBetterApproach(vector<int> arr, int n) {
        set<vector<int>> uniqueTriplets;
        for(int i = 0; i < n; i++){
            unordered_set<int> seen;
            for(int j = i + 1; j < n; j++){
                int remaining = 0 - (arr[i] + arr[j]);

                if(seen.find(remaining) != seen.end()){
                    vector<int> triplets = {arr[i], arr[j], remaining};
                    sort(triplets.begin(), triplets.end());
                    uniqueTriplets.insert(triplets);
                }
                // storing the next element because Because nums[i] is the fixed first element. We're using seen to remember previous j elements, so we can calculate remaining
                seen.insert(arr[j]);
            }
        }

        return vector<vector<int>>(
        uniqueTriplets.begin(),
        uniqueTriplets.end()
        );
    }

    vector<vector<int>> threeSumOptimalApproach(vector<int> arr, int n){
        sort(arr.begin(), arr.end());
        vector<vector<int>> answer;

        for(int i = 0; i < n; i++){
            if(i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicate elements
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum < 0){
                    j++;
                } 
                else if(sum > 0){
                        k--;
                }
                else{
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    answer.push_back(temp);
                    j++;
                    k--;
                    while(j < k && arr[j] == arr[j - 1]) j++; // Skip duplicate elements
                    while(j < k && arr[k] == arr[k + 1]) k--; // Skip duplicate elements
                }
            }
        }
        return answer;
    }
};

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of an array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    vector<vector<int>> answer = obj.threeSum(arr, n);
    for(auto triplet: answer){
        cout << "[ ";

        for(int i = 0; i < triplet.size(); i++){
            cout << triplet[i] << " ";
        };

        cout << "]\n";
    };
    cout << endl;

    vector<vector<int>> answerBetter = obj.threeSumBetterApproach(arr, n);
    for(auto triplet: answerBetter){
        cout << "[ ";

        for(int i = 0; i < triplet.size(); i++){
            cout << triplet[i] << " ";
        };

        cout << "]\n";
    };
    cout << endl;

    vector<vector<int>> answerOptimal = obj.threeSumOptimalApproach(arr, n);
    for(auto triplet: answerOptimal){
        cout << "[ ";

        for(int i = 0; i < triplet.size(); i++){
            cout << triplet[i] << " ";
        };

        cout << "]\n";
    };
    cout << endl;   

    return 0;
}