class Solution {
public:
    int minimumLength(string s) {
        int l=0, r=s.size()-1;
        while (l< r){
            if (s[l]!= s[r]){return r-l+1;}
            else{
                int t1= l, t2=r;
                while(l+1< r && s[l+1]== s[t1]){l++;}
                while(r-1> l && s[r-1]== s[t2]){r--;}
                l++; r--;
            }
        }return l == r ? 1 : 0;
    }
};