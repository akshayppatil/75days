class Solution {
public:
    int maxArea(vector<int>& height) {
        int amount=0, left=0, right=height.size()-1;
        while(left<right)
        {
            amount=max(amount,min(height[left],height[right])*(right-left));
            if(height[left]<height[right])
            {
                if(height[left+1]<height[left])
                {
                    left++;      
                }
                left++;
                
            }//if
            else if(height[left]>height[right])
            {
                if(height[right-1]<height[right])
                {
                    right--;
                }
                right--;
            }
            else
            {
                left++;
                right--;
            }
        }//while
        return amount;
    }
};
