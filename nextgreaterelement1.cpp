class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>hmap;
        int n= nums2.size();
        
        st.push(nums2[n-1]);
        hmap[st.top()]=-1;
        
        for(int i=n-2;i>=0;i-- )
        {
            while(!st.empty() && st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
               hmap[nums2[i]]=-1;  
            }
            else
            {
               hmap[nums2[i]]=st.top();   
            }
            st.push(nums2[i]);
        }
        nums2.clear();
        for(auto it:nums1)
        {
            // cout<<hmap[it];
           nums2.push_back(hmap[it]); 
        }    
        return nums2;
    }
};