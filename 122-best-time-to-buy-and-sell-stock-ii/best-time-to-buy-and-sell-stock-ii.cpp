class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0,n=prices.size(),i;
        for(i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                m+=prices[i+1]-prices[i];
            }
        }
        return m;
    }
};