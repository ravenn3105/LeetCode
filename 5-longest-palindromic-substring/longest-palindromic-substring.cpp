class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen=0, ansLen=0;
        int n= s.size();
        for (int i=0; i<n; i++){
            int l=i, r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if (r-l+1>maxLen){
                    ansLen=l;
                    maxLen=r-l+1;
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if (r-l+1>maxLen){
                    ansLen=l;
                    maxLen=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(ansLen, maxLen);
    }
};
