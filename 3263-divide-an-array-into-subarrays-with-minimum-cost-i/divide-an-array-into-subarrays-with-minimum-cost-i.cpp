class Solution {
public:
    int minimumCost(vector<int>& nums) {
        partial_sort(nums.begin()+1, nums.begin()+3, nums.end());
        return accumulate(nums.begin(), nums.begin()+3, 0);
    }
};