class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=0, mn=INT_MAX;

        for (auto i:tasks){
            mn= min(mn, (i[0]+i[1]));

        }
        return mn;
    }
};