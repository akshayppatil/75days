class Solution
{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int a=0,b,c,d,sum,remaining,n=nums.size();
        while(a<n)
        {
            b=a+1;
            while(b<n)
            {
                c=b+1,d=n-1;
                remaining=target-nums[a]-nums[b];
                while(c<d)
                {
                    sum=nums[c]+nums[d];
                    if(sum==remaining)
                    {
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                        while(c+1<d && nums[c+1]==nums[c])
                            c++;
                        while(d-1>c && nums[d-1]==nums[d])
                            d--;
                        c++;
                        d--;
                    }
                    else if(sum<remaining)
                        c++;
                    else
                        d--;
                }
                while(b+1<n && nums[b+1]==nums[b])
                    b++;
                b++;
            }
            while(a+1<n && nums[a+1]==nums[a])
                a++;
            a++;
        }
        return ans;
    }
};