// Find the Duplicate Number (Floyd’s Cycle Detection)
// Idea: Treat array as a linked list where index -> nums[index], detect cycle using slow & fast pointers, then find cycle entry (duplicate)

// Time: O(n), Space: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // initialize pointers at the start
        int slow=nums[0];
        int fast=nums[0];

        // move slow by 1 step and fast by 2 steps until they meet
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);

        // reset slow to start to find the entrance to the cycle
        slow=nums[0];

         // move both by 1 step until they meet at the duplicate
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        // then return the duplicate value
        return slow;
    }
};
