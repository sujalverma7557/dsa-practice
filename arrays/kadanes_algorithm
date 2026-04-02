// Maximum Subarray (Kadane's Algorithm)
// Idea: keep adding to sum, reset when it goes negative

// Time: O(n), Space: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            // update max
            maxi = max(maxi, sum);

            // if sum becomes negative, reset
            if(sum < 0) sum = 0;
        }

        return maxi;
    }
};
