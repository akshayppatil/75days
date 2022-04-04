class Solution {
public:
    int maxArea(int h, int w, vector<int>& hs, vector<int>& vs) {
      sort(hs.begin(),hs.end());
        sort(vs.begin(),vs.end());
        // max length cut from vertical cuts
        int vm=w-vs[vs.size()-1];
        
        vm=max(vm,vs[0]);
        for(int i=vs.size()-1;i>0;i--){
            vm=max(vm,vs[i]-vs[i-1]);
        }
        
        // max horizontal length
        int hm=h-hs[hs.size()-1];
        hm=max(hm,hs[0]);
        for(int i=hs.size()-1;i>0;i--){
            hm=max(hm,hs[i]-hs[i-1]);
        }
        
        int mod=(1e9+7);
        return (hm*1LL*vm)%mod;;
    }
};