class Solution {
public:
    int characterReplacement(string s, int k) {
        
        vector<int> count(26,0);
        int r=0, l=0;
        int maxc=0;
        int ans=0;
        
        while(r< s.length())
        {
            // include r 
            count[s[r]-'A']+=1;
            // find max character freq in hash map
            for(int i =0; i< count.size(); i++)
                maxc=max(maxc,count[i]);
            
    
            while( r-l+1 - *max_element(count.begin(),count.end()) >k) // adjust window, dec from left
            {
                count[s[l]-'A']-=1;
                l++;
                k1=r-l+1 - maxc;
            }
          // bec have already adjusted the window now its a candidate  
            ans=max(ans,r-l+1);
            r++; // shift window to right
            
        }
        return ans;
        
        
    }
}