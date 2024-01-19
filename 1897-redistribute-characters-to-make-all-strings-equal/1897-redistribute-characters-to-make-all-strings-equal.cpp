class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int> freq;
        for (auto i: words){
            for (auto j: i){
                freq[j]++;
            }
        }
        for (auto j: freq){
            if (j.second%words.size()!= 0){
                return false;
            }
        }return true;
    }
};