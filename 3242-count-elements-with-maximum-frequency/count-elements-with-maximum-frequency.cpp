class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<vector<int>> v(nums.size()+1);
        map<int,int> mp;
        for (auto i:nums){
            mp[i]++;
        }
        for (auto i:mp){
            v[i.second].push_back(i.first);
        }
        int n;
        for (int i=v.size()-1; i>0; i--){
            if (v[i].size()!=0){
                n= v[i].size()*i;
                break;
            }
        }
        return n;
    }
};