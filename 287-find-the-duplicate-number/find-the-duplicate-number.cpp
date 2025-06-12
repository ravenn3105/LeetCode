class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(), -1);
        for (auto i:nums){
            if (v[i]== 1){
                return i;
            }
            else{
                v[i]=1;
            }
        }
        return 0;
    }
};
