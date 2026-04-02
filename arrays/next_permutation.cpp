// Next Permutation
// Idea: find breakpoint, swap with next greater, then reverse right part
// Time: O(n), Space: O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();

        // Find the first decreasing element from end
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }

        // If no such index found
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // Find element just greater than breaking point which is nums[index]
        for(int i=n-1; i>index; i--){
            //swap them
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

        //Reverse the right part after index
        reverse(nums.begin()+index+1, nums.end());

    }
};
