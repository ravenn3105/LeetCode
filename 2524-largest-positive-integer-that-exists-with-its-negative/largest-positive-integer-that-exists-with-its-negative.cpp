class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans=-1;
        for (auto i:nums){
            int n=i;
            if (find(nums.begin(), nums.end(), -i) != nums.end()){
                
                ans= max(ans, n);
            }
        }
        return ans;
    }
};