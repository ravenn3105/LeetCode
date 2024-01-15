class Solution {
public:
unordered_map <int,int> Lost;
    void mapping(vector<vector<int>>& matches){
        for (int i=0; i<matches.size(); i++){
            int lose=matches[i][1];
            Lost[lose]++;
        }  
    }
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       mapping(matches);
        vector<int> notLost;
        vector<int> onceLost;
        int winner;
        for (auto j: Lost){
            if (j.second==1){
                onceLost.push_back(j.first);
            }
        }
        for (int i=0; i<matches.size(); i++){
            winner= matches[i][0];
            if (Lost.find(winner)==Lost.end()){
                notLost.push_back(winner);
                Lost[winner]=2;
            }
            
        }sort(notLost.begin(), notLost.end());
        sort(onceLost.begin(), onceLost.end());
        return{notLost, onceLost};
    }
};