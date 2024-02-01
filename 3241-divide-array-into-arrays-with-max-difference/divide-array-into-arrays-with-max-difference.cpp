class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> p;
        for (int i=0; i<nums.size(); i+=3){
            if (nums[i+2]- nums[i]<= k){
                p.push_back(nums[i]);
                p.push_back(nums[i+1]);
                p.push_back(nums[i+2]);
                ans.push_back(p);
                p.clear();
            }else {
                return {};
            }
        }return ans;

    }
};