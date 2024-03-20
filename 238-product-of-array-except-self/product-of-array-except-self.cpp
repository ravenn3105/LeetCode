class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        
        for(int i=1; i<nums.size(); i++){
           answer[i]= answer[i-1]* nums[i-1];}
        long long int prev=1;
        for (int i=n-1; i>=0; i--){
            answer[i]= answer[i]* prev;
            prev= prev*nums[i];
        }
        return answer;
    }
};