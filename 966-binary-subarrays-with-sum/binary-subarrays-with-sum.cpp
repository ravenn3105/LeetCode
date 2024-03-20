class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        int l=0;
        vector <int> freq(nums.size()+1,0);
        for(int i=0; i<nums.size(); i++){
            l+= nums[i];
            if (l==goal){
                ans++;
            }
            if (l>=goal){
                ans+=freq[l-goal];
            }
            freq[l]++;
        }
        return ans;
    }
};