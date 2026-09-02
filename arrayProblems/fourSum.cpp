#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int> arr, int n, int target){
        vector<vector<int>> answer;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    for(int l = k + 1; l < n; l++){
                        if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                            answer.push_back(temp);
                        }
                    }
                }
            }
        }
        return answer;
    }

    vector<vector<int>> fourSumBetterApproach(vector<int> arr, int n, int target){
        vector<vector<int>> answer;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                unordered_set<int> seen;
                for(int k = j + 1; k < n; k++){
                    int remaining = target - (arr[i] + arr[j] + arr[k]);
                    if(seen.find(remaining) != seen.end()){
                        vector<int> temp = {arr[i], arr[j], arr[k], remaining};
                        answer.push_back(temp);
                    }
                    // k is inserted and not i, j because i and j are fixed elements, and we are looking for the fourth element that can complete the quadruplet. We use seen to remember previous k elements, so we can calculate remaining.
                    seen.insert(arr[k]);
                }
            }
        }
        return answer;
    }

    vector<vector<int>> fourSumOptimalApproach(vector<int> arr, int n, int target){
        sort(arr.begin(), arr.end());
        vector<vector<int>> answer;
        for(int i = 0; i < n; i++){
            if(i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicate elements
            for(int j = i + 1; j < n; j++){
                if(j > i + 1 && arr[j] == arr[j - 1]) continue; // Skip duplicate elements
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    int sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if(sum == 0){
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        answer.push_back(temp);
                        k++;
                        l--;
                        while(k < l && arr[k] == arr[k + 1]) k++; // Skip duplicate elements
                        while(k < l && arr[l] == arr[l - 1]) l--; // Skip duplicate elements
                    } else if(sum < 0){
                        k++;
                    } else{
                        l--;
                    }
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

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Enter the elements of an array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    Solution obj;
    vector<vector<int>> answer1 = obj.fourSum(arr, n, target);
    for(auto quad: answer1){
        cout << "[ ";

        for(int i = 0; i < quad.size(); i++){
            cout << quad[i] << " ";
        };

        cout << "]\n";
    }
    cout << endl;

    vector<vector<int>> answer2 = obj.fourSumBetterApproach(arr, n, target);
    for(auto quad: answer2){
        cout << "[ ";

        for(int i = 0; i < quad.size(); i++){
            cout << quad[i] << " ";
        };

        cout << "]\n";
    }
    cout << endl;

    vector<vector<int>> answer3 = obj.fourSumOptimalApproach(arr, n, target);
    for(auto quad: answer3){
        cout << "[ ";

        for(int i = 0; i < quad.size(); i++){
            cout << quad[i] << " ";
        };

        cout << "]\n";
    }
    cout << endl;
    return 0;
}