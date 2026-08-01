class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<s;i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(prices[i],mini);
        }
        return profit;
        
    }
};