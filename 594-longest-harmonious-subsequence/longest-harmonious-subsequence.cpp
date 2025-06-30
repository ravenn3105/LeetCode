class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0, i=0 ;
        for (int j=0; j<nums.size(); j++){
            while(abs(nums[j]- nums[i])>1){
                i++;
            }
            if (abs(nums[j]- nums[i])==1){
                count=max(count, j-i+1);
            }
        }
        return count;
    }
};