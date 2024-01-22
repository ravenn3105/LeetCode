class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i=0;
        int a=0;
        while (i<nums.size()){
            if (nums[i]==nums[i+1]){
                
                ans.push_back(nums[i]);
                
                break;
            }else{
                i++;
            }
        }for(int i=1;i<=nums.size();i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                a=i;
                break;
            }
        }ans.push_back(a);
            return ans;
    }
};