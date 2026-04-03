// Merge Sorted Array
// Idea: Use two pointers from the end to fill nums1 in-place (avoid overwriting)

// Time: O(m + n), Space: O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // i points to last valid element in nums1
        int i=m-1;

        // j points to last valid element in nums2
        int j=n-1;

        // k is the last index of nums1
        int k=m+n-1;

        // Fill from back by comparing elements
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }

        // If nums2 has remaining elements, copy them
        while(j>=0){
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};
