class Solution {
    
    void combination(int index,int target,vector<int>& candidates,vector<vector<int>>&ans,vector<int>&ds)
    {
        //if index == size thats means there is no other element that can be chosen
        if(index==candidates.size()){
            //if target is zero that means we got a combination which is equal to target, so store in ans;
            if(target==0){
                ans.push_back(ds);
            }
            //else return
            return;
        }
        //if target is greater insert the same index element and push in ds that particular element
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            //this function will check all possible combination(i will attach the recursion tree diagram)
            combination(index,target-candidates[index],candidates,ans,ds);
            //during back tracking of the recursion we need to pop the element so that right part of recursion tree can happen with original arr;
            ds.pop_back();
        }
        //else when we dont include the element, we increase the index and then call the func to check if that index element can be include in one case and when not included in other case;
        combination(index+1,target,candidates,ans,ds);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //for storing ans;
        vector<vector<int>>ans;
        //for storing elements in all steps of recursion
        vector<int>ds;
        
        combination(0,target,candidates,ans,ds);
        return ans;
    }
};