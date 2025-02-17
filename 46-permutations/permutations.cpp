class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<vector<int>> perms;

        if (nums.size()==1){
            return {nums};
        }

        for (int i =0; i<nums.size(); i++){
            int n = nums.front();  
            nums.erase(nums.begin());
            perms= permute(nums);
            for (auto& j:perms){
                j.push_back(n);
            }
            res.insert(res.end(), perms.begin(), perms.end());
            nums.push_back(n);
        }
        return res;
    }
};