void nextPermutation(vector<int>& nums) {
    int size = nums.size(),
        index1, 
        index2;
    
    //Step1 
    for(index1=size-2; index1>=0; index1--)
    {
        if(nums[index1]<nums[index1+1])
            break;
    }
    
    //edge case, if numbers are in descending order 5,4,3,2,1 --next--> 1,2,3,4,5
    if(index1<0) reverse(nums.begin(), nums.end());
    else
    {
        //step2
        for(index2=size-1; index2>index1; index2--)
        {
            if(nums[index2] > nums[index1])
                break;
        }
        
        //step3
        swap(nums[index1], nums[index2]);
        //step4
        reverse(nums.begin()+index1+1, nums.end());
    }
}