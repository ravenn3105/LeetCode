class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int, vector<int>> mp;
        vector<int> num(n,n);
        
        for (int i=1; i<=n; i++){
            mp[i]={};
        }
        for (auto& pair : trust) {
        int i = pair[0];
        int j = pair[1];
        mp[i].push_back(j);
        num[j-1]--;

        }
        for (int i=0; i<n; i++){
            if (num[i]==1 && mp[i+1].empty()){
                return i+1;
            }
        }
        
        return -1;
    }
};