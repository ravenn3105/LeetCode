class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int a=0, ans=0;
        for (int i=2; i<nums.size(); i++){
            if(nums[i-1]- nums[i-2]== nums[i]- nums[i-1]){
                a++;
                ans+=a;
            }else{ a=0;}
        }return ans;
    }
};