class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> s;
        sort(nums.begin(), nums.end(), greater<int>());
        int sm=nums[0];
        s.insert(nums[0]);
        for (int i=1; i<nums.size(); i++){
            if (s.find(nums[i])== s.end()){
                if (nums[i]>0){
                    sm+=nums[i];
                    s.insert(nums[i]);
                }
            }
        }
        return sm;
    }
};