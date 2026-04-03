// Merge Overlapping Intervals
// Idea: Sort intervals, then merge overlapping ones while traversing

// Time: O(n log n), Space: O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;

        int n=intervals.size();

        // first sort intervals
        sort(intervals.begin(), intervals.end());

        for(int i=0; i<n; i++){

            // If merged is empty or no overlap then just push it
            if(merged.empty() || merged.back()[1] < intervals[i][0]){
                merged.push_back(intervals[i]);
            }
            else{
                // If it overlaps then merge
                merged.back()[1]= max(merged.back()[1], intervals[i][1]);
            }
        }
        return merged;
    }
};
