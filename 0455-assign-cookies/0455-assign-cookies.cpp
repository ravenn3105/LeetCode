class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gs= g.size();
        int ss= s.size();
        int curr=0;
        if (ss==0){
            return 0;
        }
        for (int j=0; curr< gs && j<ss; j++){
            if( g[curr]<= s[j]){
                curr++;
            }
            
        }return curr;
    }
};