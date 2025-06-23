class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
public:

    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int row= grid.size();
        int col= grid[0].size();
        int fresh=0, time=0;

        for (int r=0; r<row; r++){
            for (int c=0; c<col; c++){
                if (grid[r][c]==1){
                    fresh++;
                }
                if (grid[r][c]==2){
                    q.push({r,c});
                }
            }
        }
        while( !q.empty() && fresh>0){
            int len= q.size();
            for (int i=0; i<len; i++){
                auto node= q.front();
                int r= node.first, c= node.second;
                q.pop();
                for (int i=0; i<4; i++){
                int nr= r+ directions[i][0];
                int nc= c+ directions[i][1];
                if (nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size()
                && grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                    fresh--;
                }
                
            }
        } time++;

    
    }
    return fresh==0 ? time:-1;
    }
};
