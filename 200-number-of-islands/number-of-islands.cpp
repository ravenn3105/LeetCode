class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, 
                            {0, 1}, {0, -1}};
public:

void bfs(int r, int c, vector<vector<int>> &vis,vector<vector<char>>& grid ){
    vis[r][c]=1;
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
                    !vis[nr][nc] && grid[nr][nc] == '1'){
                q.push({nr,nc});
                vis[nr][nc]=1;
            }
        }
    }
        }
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int  m= grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        int count=0;
        for (int r=0; r<n; r++){
            for (int c=0; c<m; c++){
                if (grid[r][c]=='1' && !vis[r][c]){
                    bfs(r,c,vis, grid);
                    count++;
                }
            }
        }
        return count;
    }
};