class Solution {
public:
int SW(vector<int> &nums, int k){
     unordered_map<int, int> mp;
        int i=0, j=0, c=0,n=nums.size();
        while(j<n){
            mp[nums[j]]++;
            while(mp.size()>k){
                mp[nums[i]]--;
            
            if (mp[nums[i]]==0){
                mp.erase(nums[i]);
            } i++;
        }c+=j-i+1;
        j++;
        }
        return c;

}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return SW(nums,k) -SW(nums,k-1);

    }
};