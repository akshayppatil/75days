class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int low  = i + 1, high = n -1;
            while(low < high)
            {
                int current  = nums[i] + nums[low] + nums[high];
                if(current == 0)
                {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    while(low < high && nums[low] == nums[i+1]) low++;
                    while(high > low && nums[high] == nums[high - 1]) high--;
                   
                }
                if(current < 0)
                {
                    low++;
                }
                else{
                    high--;
                }
            }
        }

        return ans;
        
    }
};