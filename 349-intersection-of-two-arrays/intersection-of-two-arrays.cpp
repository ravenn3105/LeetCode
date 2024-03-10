class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        int l =nums1.size(),m =nums2.size(),i=0,j=0;
        while(i<l && j<m )
        {
            if(nums1[i]<nums2[j]) 
                i++;
            else if(nums1[i]==nums2[j]) 
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]) j++;
        }
        
        return ans;  
    }
};