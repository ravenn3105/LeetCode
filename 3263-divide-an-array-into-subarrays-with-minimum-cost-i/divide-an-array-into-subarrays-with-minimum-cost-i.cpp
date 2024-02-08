class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=0;
        sort(nums.begin()+1,nums.end());
        for(int i=0;i<3;i++)
        {
            ans+=nums[i];
        }
        return ans;
    }
};