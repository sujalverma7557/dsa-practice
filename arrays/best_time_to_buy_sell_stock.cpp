// Best Time to Buy and Sell Stock
// Idea: track minimum price so far and calculate max profit

// Time: O(n), Space: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxi=0;

        for(int i=0; i<n; i++){
            // If current price is less than minPrice, update minPrice
            if(prices[i]<mini){
                mini=prices[i];
            }
            // Else calculate profit and update maxProfit if it's greater
            else{
                maxi=max(maxi, prices[i]-mini);
            }
        }
        return maxi;
    }
};
