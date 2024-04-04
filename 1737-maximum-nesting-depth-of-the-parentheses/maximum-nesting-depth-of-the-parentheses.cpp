class Solution {
public:
    int maxDepth(string s) {
        int m=0, curr=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                m=max(m, ++curr);
            }
            else if(s[i]== ')'){ curr--;}
            
        }
        return m;
    }
};