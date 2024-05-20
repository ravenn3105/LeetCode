class Solution {
public:
int subsets(const vector<int>& nums, int index, int currentXOR) {
        if (index >= nums.size()) {
            return currentXOR; 
        }
        return subsets(nums, index + 1, currentXOR ^ nums[index]) + subsets(nums, index + 1, currentXOR);
    }
    int subsetXORSum(vector<int>& nums) {
        return subsets(nums,0,0);
    }
};