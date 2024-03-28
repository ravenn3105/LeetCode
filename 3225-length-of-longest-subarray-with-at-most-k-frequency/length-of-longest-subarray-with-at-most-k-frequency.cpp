class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>m;
        int c=0,i=0,j=0,p=0;
        while(j<nums.size()){
            m[nums[j]]++;
            if(m[nums[j]]<=k){
                p++;
            }
            else{
                c=max(c,p);
                while(nums[i]!=nums[j]){
                    p--;
                    m[nums[i]]--;
                    i++;
                }
                    m[nums[i]]--;
                    i++;
            }
            j++;
        }
        c=max(c,p);
        return c;
    }
};