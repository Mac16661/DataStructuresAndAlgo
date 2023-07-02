#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> intervals = {{1,4},{4,5}};
    vector<vector<int>> mergeIntervals;
    vector<int> tempInterval;

    tempInterval = intervals[0];

    if(intervals.size() == 0){
        exit(0);
    }

    //TODO: sort it if arr is not sorted
    sort(intervals.begin(), intervals.end());

    for(auto it: intervals){
        if(it[0] <= tempInterval[1]){
            tempInterval[1] = max(tempInterval[1],it[1]);
        }else{
            mergeIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergeIntervals.push_back(tempInterval);

    for(auto it: mergeIntervals) {
        cout<<it[0]<<" "<<it[1]<<endl;
    } 

    return 0;
}