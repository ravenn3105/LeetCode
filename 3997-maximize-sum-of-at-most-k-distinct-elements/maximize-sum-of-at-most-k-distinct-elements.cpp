class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> s;
        vector<int> ans;
        vector<int> sv;
        for (auto i:nums){
            s.insert(i);

        }
        for( auto i:s){
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end(), greater<>());
        while (ans.size()>k){
            ans.pop_back();
        }
        return ans;
    }
};