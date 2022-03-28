int removeDuplicates(vector& nums) {
int res=1;
for(int i=1;i<nums.size();i++){
if(nums[i]!=nums[res-1]){
nums[res]=nums[i];
res++;
}
}
return res;
}