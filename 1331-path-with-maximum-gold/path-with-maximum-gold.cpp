class Solution {
public:

int dfs(vector<vector<int>>& grid, int i, int j){
    if (i<0 || j<0 || i>grid.size()-1 || j>grid[i].size()-1|| grid[i][j]==0){
        return 0;
    }
    int temp= grid[i][j];
    grid[i][j]=0;
    int up= dfs(grid, i-1,j);
    int down= dfs(grid, i+1,j);
    int left= dfs(grid, i,j-1);
    int right= dfs(grid, i,j+1);
    grid[i][j]=temp;
    return temp+ max({up,down, left,right});
}
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans =0;
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[i].size(); j++){
                if (grid[i][j]!= 0){
                ans= max(ans, dfs(grid, i,j));
                }
            }
        }
        return ans;
    }
};