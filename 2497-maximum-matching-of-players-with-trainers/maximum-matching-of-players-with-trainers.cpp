class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int cnt=0;
        if (trainers.size()==0){
            return 0;
        }
        for (int i=0; cnt<players.size() && i<trainers.size(); i++){
            if (players[cnt]<= trainers[i]){
                cnt++;
            }
        }
        return cnt;
    }
};