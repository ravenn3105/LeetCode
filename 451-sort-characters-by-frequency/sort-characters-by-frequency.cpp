class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<pair<int, char>> v;
        string ans="";
        for (auto i:s){
            freq[i]++;
        }
        for (auto i: freq){
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        for(auto i: v){
            while (i.first--){
                ans+= i.second;
            }
        }return ans;
    }
};