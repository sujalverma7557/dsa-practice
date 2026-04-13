// Search a 2D Matrix
// Idea: Treat the matrix as a flattened sorted array and apply binary search
// Time Complexity: O(log(n * m))
// Space Complexity: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0, high = n * m - 1;

        // Binary search on virtual 1D array
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Convert 1D index to 2D indices
            int row = mid / m;
            int col = mid % m;

            if (matrix[row][col] == target) {
                return true;
            } 
            else if (matrix[row][col] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return false;
    }
};
