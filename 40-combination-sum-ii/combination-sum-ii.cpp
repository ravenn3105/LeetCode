class Solution {
public:
void bt(vector<int>& candidates, int target,vector<vector<int>>& res,int i, int sum,vector<int>& path ){
    if (sum== target){
        res.push_back(path);
        return ;
    }
    if (i>=candidates.size()|| sum>= target){
        return;
    }
    path.push_back(candidates[i]);
    bt(candidates, target, res, i+1, sum+candidates[i], path);
    path.pop_back();

    while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
        i++;
    }
    bt(candidates, target, res, i+1, sum, path);

}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> path;
        bt(candidates, target, res,0,0, path);
        return res;
    }
};