class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const long long MOD=1000000007;
        int n= nums.size();
        for (auto i :queries){
            int l=i[0], r=i[1], k= i[2], m= i[3];
            for (int j= l; j<=r; j+=k){
                nums[j]= ((long long)nums[j]*m)%MOD;
            }
        }
        int ans=0;
        for (auto i :nums){
            ans^= i;
        }
        return ans;
    }
};