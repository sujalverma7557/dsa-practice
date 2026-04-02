// Sort Colors (Dutch National Flag Algorithm)
// Idea: use 3 pointers to place 0s, 1s, 2s in one pass

// Time: O(n), Space: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // Initialize the three pointers low, mid starting from 0 and high from end of array
        int low=0, mid=0, high=n-1;

        while(mid<=high){
            // If current element is 0, swap with low and move both pointers forward
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
             // If current element is 1, it's already in correct place so move mid forward
            else if(nums[mid]==1){
                mid++;
            }
            // If current element is 2, swap with high and move only high pointer backward
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
