class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            min_price=min(min_price,prices[i]);
            mp=max(mp,prices[i]-min_price);
        }
        return mp;
    }
};
