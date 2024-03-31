class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int bura=-1, mini=-1, maxi=-1, n=nums.size();
        for (int i=0; i<n; i++){
            if (nums[i]> maxK || nums[i]< minK){ bura=i;}
            if(nums[i]== minK){mini = i;}
            if(nums[i]== maxK){maxi = i;}
            ans+= max(0, min(mini, maxi)-bura);
        }
        return ans;
    }
};