class Solution {
public:
int countNegatives(vector<vector>& grid) {

    int count=0;
    int i=0,j=grid[0].size()-1;
    
    // m-1
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]<0)
                count++;
        }
    }
    return count;
    
    //m-2:
    
    while(i<grid.size()&&j>=0)
    {
        if(grid[i][j]<0)
        {
            count++;
            j--;
            if(j==-1)
            {
                i++;
                j=grid[0].size()-1;
            }
        }
        else
        {
            i++;
            j=grid[0].size()-1;
        }
        
        
    }
    return count;
}
};