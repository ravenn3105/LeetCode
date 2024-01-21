class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int mxx=0;
        for (auto i:nums){
            if (i==1){
                ++mxx;
            }else{
                mx= max(mx,mxx);
                mxx=0;
            }
        }return max(mx,mxx);
    }
};