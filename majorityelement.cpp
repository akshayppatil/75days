class Solution {
public:
int majorityElement(vector& nums) {
unordered_map<int,int> m;
int size = nums.size();
int n = size / 2;
for(int i=0;i<nums.size();i++){
m[nums[i]]++;
}
for(auto i:m){
if(i.second > n){
return i.first;
}
}
return -1;
}
};