class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int ans=0;
        for (auto i:set){
            if (set.find(i-1)== set.end()){
                int len=1;
                while(set.find(i+len)!= set.end()){
                    len++;
                }
                ans= max(ans, len);
            }

        }
        return ans;
    }
};
