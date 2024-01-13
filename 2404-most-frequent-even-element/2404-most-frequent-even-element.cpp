class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int even=0;
        map<int, int> freq;
        for(auto x: nums){
            freq[x]++;
        }
        for (auto i: freq){
            if(i.first%2==0 && i.second> even){
                ans= i.first;
                even= i.second;
            }
        }return ans;

    }
};