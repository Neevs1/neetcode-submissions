class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minnum = INT_MAX;
        for(int i=0;i<prices.size();i++){
            minnum = min(minnum,prices[i]);
            profit = max(profit,prices[i]-minnum);
        }
        return profit;
    }
};
