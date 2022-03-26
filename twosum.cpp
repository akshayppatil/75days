#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sol;
        
        unordered_map<int,int> umap;
	    for(int i=0;i<nums.size();i++){
	        int temp=target-nums[i];
	        if(umap.find(temp)!=umap.end()){
	            int i1=umap.find(temp)->second;
	            sol.push_back(i1);
                sol.push_back(i);
	            
	            return sol;
	        }
	        umap[nums[i]]=i;
	    
	    }
     return sol;   
    }   
};