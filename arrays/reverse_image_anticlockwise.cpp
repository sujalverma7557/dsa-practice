// Rotate Matrix by 90 degrees (Anti-clockwise)
// Idea: Transpose the matrix, then reverse each column

// Time: O(n^2), Space: O(1)


class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();

      // First we transpose the matrix
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

      // Then we reverse each column
        for(int j=0; j<n; j++){
            int top=0, bottom=n-1;
            while(top<bottom){
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};
