class Solution {
public:
    string customSortString(string order, string s) {
     unordered_map<char, int> mp;
     string r="";
     for (auto i:s){
         mp[i]++;
     }
     for(int j=0; j<order.size(); j++){
         r+= string(mp[order[j]], order[j]);
         mp[order[j]]=0;
     }
     for(auto i:mp){
         if (i.second!=0){
             r+= string(i.second, i.first);
         }
     }
     return r;
    }
};