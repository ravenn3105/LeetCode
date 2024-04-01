class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length();
        int r=0;
        int z=0;
        for (int i=n-1; i>=0; i--){
            if (s[i]==' ' && z==1){
                break;
            }
            if (s[i]!=' '){
                z=1;
                r+=1;}
            
        }
        return r;
    }
};