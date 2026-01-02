class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n= nums.size()/2;
        int ans;
        map<int, int> mp;
        for (auto i:nums){
            mp[i]++;
        }
        for (auto i:mp){
            if (i.second==n){
                return i.first;
            }
        }
        return 0;
    }
};