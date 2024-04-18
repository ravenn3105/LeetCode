class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int p=0;
       int row=grid.size(); 
       int col=grid[0].size(); 
       for (int r=0; r<row; r++){
        for (int c=0; c<col; c++){
            if (grid[r][c]==1){ 
                p+=4;
                if (r>0 && grid[r-1][c]==1){ p-=2;}
                if (c>0 && grid[r][c-1]==1){ p-=2;}
            }
        }
       }
       return p;
    }
};