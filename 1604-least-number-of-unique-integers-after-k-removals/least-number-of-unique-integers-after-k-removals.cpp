class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto i: arr){
            mp[i]++;
        }
        vector<int> freq;
        for (auto i: mp){
            freq.push_back(i.second);
        }
        int c=0;
        sort(freq.begin(), freq.end());
        for (auto i: freq){
            if (k>= i){
                k-=i;
                c++;
            }else{
                break;
            }
        }return freq.size()-c;
    }
};