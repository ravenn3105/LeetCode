class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, 
                            {0, 1}, {0, -1}};
    int mx=0;
public:

void bfs(int r, int c, vector<vector<int>>& grid){
    grid[r][c]=0;
    int iSize=1;
    queue<pair<int,int>> q;
    q.push({r,c});
    int n= grid.size();
    int  m= grid[0].size();
    while(!q.empty()){
        auto node= q.front();
        int row= node.first, col=node.second;
        q.pop();
        
        for (int i=0; i<4; i++){
            int nr= row+ directions[i][0];
            int nc= col+ directions[i][1];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&  
                    grid[nr][nc] == 1){
                q.push({nr,nc});
                iSize++;
                grid[nr][nc]=0;
            }
            
        }
    }
    mx=max(mx,iSize);


}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++){
            for (int j=0;j<m; j++){
                if (grid[i][j]==1){
                    bfs(i,j,grid);
                }
            }
        }
        return mx;

    }
};
