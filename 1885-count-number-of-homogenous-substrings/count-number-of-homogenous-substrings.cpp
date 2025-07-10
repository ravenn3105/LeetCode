class Solution {
public:
    int countHomogenous(string s) {
        int l=0, r=0;
        long long n= 0;
        int mod= 1e9+7;
        while(r<s.size()){
            if (s[l]!= s[r]){
                l=r;
            }
            n= (n+(r-l+1))%mod;
            r++;
        }
        return n;
    }
};