class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int x = player1[0], y = player2[0];
        int i = 0, n = player1.size();
        for(i = 1; i < n; i++){
            if(i==1){
                if(player1[i-1]==10)
                    x += player1[i]*2;
                else x += player1[i];
                if(player2[i-1]==10)
                    y += player2[i]*2;
                else y += player2[i];
            }else{
                if(player1[i-1]==10||player1[i-2]==10)
                    x += player1[i]*2;
                else x += player1[i];
                if(player2[i-1]==10||player2[i-2]==10)
                    y += player2[i]*2;
                else y += player2[i];
            }
        }
        if(x>y)return 1;
        if(y>x)return 2;
        return 0;
    }
};