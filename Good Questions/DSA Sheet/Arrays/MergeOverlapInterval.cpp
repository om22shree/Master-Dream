// Merge overlapping intervals to reduce the number of intervals.
/*
Logic :-
    Sort the interval. Push the first interval to the answer array.
    Iterate over the interval array if(interval[i][0] <= ans.back()[1])
    then update ans.back()[1] = max(intervals[i][1], ans.back()[1]);
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.size()<=1) return intervals;
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    for(int i=1; i<intervals.size(); i++) {
        if(ans.back()[1] >= intervals[i][0]) 
        ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
        else ans.push_back(intervals[i]); 
    }
    return ans;
}
