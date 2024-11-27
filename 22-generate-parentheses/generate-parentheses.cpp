class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        recursion(ans, n, 0,0, "");
        return ans;
    }
    void recursion(vector<string> &ans, int n, int open, int close, string s){
        if (s.size()== n*2){
            ans.push_back(s);
        }
        if (open< n){
            recursion(ans, n, open+1, close, s+"(");
        }
        if (close<open){
            recursion(ans, n, open, close+1, s+")");
        }
    }
};