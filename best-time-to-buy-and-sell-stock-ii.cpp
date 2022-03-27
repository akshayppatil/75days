class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1) return 0;
        int res = max(0, prices[1] - prices[0]);
        for(int i=1; i<n-1; ++i) {
            res += max(0, prices[i+1] - prices[i]);
        }
        return res;
    }
};