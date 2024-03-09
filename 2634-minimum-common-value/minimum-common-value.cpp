class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
       
        for(auto j: nums2){
            if(s.contains(j)){ return j;}
        
        }return -1;
    }
};