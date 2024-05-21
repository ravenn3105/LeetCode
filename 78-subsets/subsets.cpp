class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans= {{}}; 
        for (auto x: nums) {
            int size=ans.size();
            for (int i=0;i<size; i++) {
                vector<int> subset = ans[i];
                subset.push_back(x);
                ans.push_back(subset);
            }
        }
        return ans;
    }
};