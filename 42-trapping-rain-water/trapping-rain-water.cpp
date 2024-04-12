class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0, left=0, right=height.size()-1, lm=INT_MIN, rm=INT_MIN;
        while (left<=right){
            lm= max(lm, height[left]);
            rm= max(rm, height[right]);
            if(lm<rm){
                ans+= lm- height[left];
                left++;
            }else{
                ans+=rm-height[right];
                right--;
            }
        }
        return ans;
    }
};