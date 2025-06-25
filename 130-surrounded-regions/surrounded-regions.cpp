class Solution {
    void convert(int r, int c, vector<vector<char>>& board){
    if (r>=board.size() || c>=board[0].size() ||r<0 || c<0
    || board[r][c]!= 'O' ){
        return ;
        
    }
    board[r][c]='T';
    convert(r+1, c, board);
    convert(r, c-1, board);
    convert(r-1, c, board);
    convert(r, c+1, board);
}
public:

    void solve(vector<vector<char>>& board) {
        for (int r=0; r<board.size(); r++){
            if (board[r][0]== 'O'){
                convert(r,0, board);
            }
            if (board[r][board[0].size()-1]== 'O'){
                convert(r,board[0].size()-1, board);
            }
        }

        for (int c=0; c<board[0].size(); c++){
            if (board[0][c]== 'O'){
                convert(0,c, board);
            }
            if (board[board.size()-1][c]== 'O'){
                convert(board.size()-1,c, board);
            }
        }
        for (int r=0; r<board.size(); r++){
            for (int c=0; c<board[0].size(); c++){
                if (board[r][c]=='O'){
                    board[r][c]='X';
                }
                else if (board[r][c]=='T'){
                    board[r][c]='O';
                }
            }
        }
    }
};
