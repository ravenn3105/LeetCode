class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for (auto i: nums1){
            s.insert(i);
        }
        for(auto j: nums2){
            if(s.contains(j)){ return j;}
        
        }return -1;
    }
};