class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,maxi=0, mini=prices[0];
        int n = prices.size();
        for(int i=1; i<n; i++ ){
            if(prices[i] < mini ){
                mini = prices[i];
            }
            else{
                if(p < prices[i] - mini ){
                    p = prices[i] - mini;
                }
            }
        }
        return p;
    }
};