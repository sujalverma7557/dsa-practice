// Set Matrix Zeroes (LeetCode)
// Approach: Used the first row & column as markers (O(1) space)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool frow = false;
        bool fcol = false;

        // checks the first row
        for(int j = 0; j < n; j++){
            if(matrix[0][j] == 0){
                frow = true;
                break;
            }
        }

        // checks the first column
        for(int i = 0; i < m; i++){
            if(matrix[i][0] == 0){
                fcol = true;
                break;
            }
        }

        // marks the rows & cols
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // then update matrix
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // handle first row
        if(frow){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }

        // handle first column
        if(fcol){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
