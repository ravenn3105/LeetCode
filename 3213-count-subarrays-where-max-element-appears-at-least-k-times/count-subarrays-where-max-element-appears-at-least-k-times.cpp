class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0, j=0, c=*max_element(nums.begin(), nums.end());
        long long ans=0;
        while (j<nums.size()){
            if (nums[j]==c){
                k--;
            }
            while (k==0){
                ans+= nums.size()-j;
                if (nums[i]==c){k++;}
                i++;
            }j++;
            
        }return ans;
    }
};