#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<vector<int>> mergeTwoIntervals(vector<vector<int>>& intervals, int n){
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for(int i = 0; i < n; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!merged.empty() && end <= merged.back()[1]){
                continue;
            }
            for(int j = i + 1; j < n; j++){
                if(intervals[j][0] <= end){
                    end = max(end, intervals[j][1]);
                } else{
                    break;
                }
            }
            merged.push_back({start, end});
        }

        return merged;
    }

    vector<vector<int>> mergeTwoIntervalsOptimalApproach(vector<vector<int>>& intervals, int n){
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for(int i = 0; i < n; i++){
            if(merged.empty() || intervals[i][0] > merged.back()[1]){
                merged.push_back(intervals[i]);
            }
            else{
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }

        return merged;
    }
};
int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    int n = intervals.size();
    Solution obj;
    vector<vector<int>> answer1 = obj.mergeTwoIntervals(intervals, n);
    for(auto it : answer1){
        cout << "{" << it[0] << ", " << it[1] << "}" << endl;
    }
    cout << endl;
    vector<vector<int>> answer2 = obj.mergeTwoIntervalsOptimalApproach(intervals, n);
    for(auto it : answer2){
        cout << "{" << it[0] << ", " << it[1] << "}" << endl;
    }
    return 0;
}