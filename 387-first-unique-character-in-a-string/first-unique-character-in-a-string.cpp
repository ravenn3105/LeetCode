class Solution {
public:
    int firstUniqChar(string s) {
        //Store the idx of last occurance of every character.
        vector<int> idx(26,0);
        for(int i=0; i<s.length();i++){
            idx[s[i]-'a'] = i;
        }
        int res = -1;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            // If the first occurance and last occurance is same then that character occurs only once and since we are traversing from left to right, we will be getting the first such character.
            if(idx[ch-'a']==i) return i;
            else idx[ch-'a'] = i;
            // Swapping the last occurance to first occurance so that idx[ch-'a'] would not pass at the last occurance.
        }
        return res;
    }
};