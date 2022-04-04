class Solution {
public:
    vector<int> areaOfIsland;
    
    int dfs(vector<vector<int>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1)
            return 0;
        
        int area = 1;
        grid[i][j] = 2;
        area += dfs(grid, i - 1, j);
        area += dfs(grid, i + 1, j);
        area += dfs(grid, i, j - 1);
        area += dfs(grid, i, j + 1);
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1) 
                    areaOfIsland.push_back(dfs(grid, i, j));
        
        int maxArea = 0;
        for (int curArea : areaOfIsland)
            maxArea = max(maxArea, curArea);
        return maxArea;
    }
};