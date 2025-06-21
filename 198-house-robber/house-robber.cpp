class Solution {
public:
    int rob(vector<int>& nums) {
        nums.push_back(0);
        for (int i=nums.size()-4; i>-1; i-- ){
            nums[i]= nums[i] + max(nums[i+2], nums[i+3]);
        }
        return (max(nums[1], nums[0]));
    }
};
