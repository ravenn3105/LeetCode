class Solution {
public:
    int countAsterisks(string s) {
        bool bar=false;
        int ans=0;
        for (char c: s){
            if (c=='|'){
                bar= not bar;
            }
            if ( c=='*' && bar==false){
                ans++;
            }
        }return ans;
    }
};