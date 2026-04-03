// Rotate Matrix by 90 degrees (Clockwise)
// Idea: Transpose the matrix, then reverse each row

// Time: O(n^2), Space: O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

      // First we transpose
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

      // Then reverse each row
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
