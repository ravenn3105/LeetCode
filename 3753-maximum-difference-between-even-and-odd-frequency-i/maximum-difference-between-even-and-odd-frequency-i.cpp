class Solution {
public:
    int maxDifference(string s) {
        map<int, int> mp;
        for(auto i: s){
            mp[i]++;
        }
        int odd=0,even=s.length();
        for (auto i :mp){
            if (i.second%2!= 0){
                if(i.second>odd){
                    odd= i.second;
                }
                
            }
        }
        for (auto i :mp){
            if (i.second%2== 0){
                if(i.second<even){
                    even= i.second;
                }
                
                
            }
        }
        return odd-even;
    }
};