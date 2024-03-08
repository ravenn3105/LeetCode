class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v(101, 0);
        int s=0;
        for (auto i: nums){
            v[i]++;
        }
        sort(v.begin(), v.end());
        int z= v[v.size()-1];
        for (int i=0; i<101; i++){
            if (v[i]==z){
                s+= v[i];
            }
        }return s;
    }
};