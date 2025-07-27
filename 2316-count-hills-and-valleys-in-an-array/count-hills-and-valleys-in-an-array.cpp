class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> n;
        for (int i=0; i<nums.size(); i++){
            if (i==0){
              n.push_back(nums[i]);  
            }
            if (i>0 && nums[i]!= nums[i-1]){
                n.push_back(nums[i]);
            }
        }
        int c=0;
        for (int i=1; i<n.size()-1; i++){
            if((n[i]>n[i+1] && n[i]>n[i-1]) || 
            (n[i]<n[i+1] && n[i]<n[i-1]) ){
                c++;
            }
        }
        return c;
    }
};