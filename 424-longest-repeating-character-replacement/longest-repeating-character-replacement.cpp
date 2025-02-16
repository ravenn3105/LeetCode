class Solution {
public:
int maxElement(unordered_map<char,int>& mp){
    int maxValue=0;
    for (const auto& pair : mp) {
        if (pair.second > maxValue) {
            maxValue = pair.second;
            
        }
    }
    return maxValue;
}
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int res=0;
        int l=0;
        for (int r=0; r<s.size(); r++){
            mp[s[r]]++;
            while ((r-l+1)- maxElement(mp)>k){
                mp[s[l]]--;
                l++;
            }
        res=max(res,r-l+1);
        }
        return res;
    }
};
