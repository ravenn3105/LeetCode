class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                int c=1;
                if (grid[i][j]== grid[i+1][j]){ c++;}
                if (grid[i][j]== grid[i][j+1]){ c++;}
                if (grid[i][j]== grid[i+1][j+1]){ c++;}
                if (c==1 | c==3 |c==4){
                    return true;
                }
            }
        }return false;
    }
};