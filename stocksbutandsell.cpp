


int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int ans=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            if(i+1<n)
            {
                ans=max(ans,prices[i+1]-mn);
            }
        }
        ans=max(ans,0);
        return ans;
    }