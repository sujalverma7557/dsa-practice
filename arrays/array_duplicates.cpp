// Find All Duplicates in Array
// Idea: Use index marking and treat value as index and flip sign to mark visited, if already negative then that means duplicate found

// Time: O(n), Space: O(1) (excluding result)

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n= arr.size();
        vector<int> res;
        
        for(int i=0; i<n; i++){
            int index= abs(arr[i])-1;
            
            if(arr[index]<0){
                res.push_back(index+1); // duplicate found
            }
            else{
                arr[index] = -arr[index];   // mark visited
            }
        }
        return res;
    }
};
