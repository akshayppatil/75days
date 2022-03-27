class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
        vector<int> ans;
        int extra =1;
        
        for(int i=digits.size()-1; i>=0 ; i--){
           int sum = digits[i]+extra;
            
            if(sum<10){
                extra=0;
                ans.push_back(sum);
            }else{
                extra=1;
                ans.push_back(0);
            }
        }
        
        if(extra==1) ans.push_back(1);
        
        reverse(ans.begin(), ans.end());
        
        
        return ans;
        
    }
};