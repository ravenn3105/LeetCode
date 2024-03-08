class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> s;
        for (auto i:nums){
            s[i]++;
        }
        int c=0, a=0;
        for (auto i:s){
            a= max(i.second, a);
        }
        for (auto i:s){
            if (i.second== a){
                c+= i.second;;
            }
        }return c;
    }
};