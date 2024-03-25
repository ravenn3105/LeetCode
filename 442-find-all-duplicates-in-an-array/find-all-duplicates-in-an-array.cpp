class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> v;
        for(auto i:nums){
            if(s.count(i)){
                v.push_back(i);
            }
            s.insert(i);
        }
        return v;
    }
};