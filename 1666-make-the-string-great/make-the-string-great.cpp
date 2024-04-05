class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (char i :s){
            if(!st.empty() && abs(i-st.top())==32){
                st.pop();

            }else{ st.push(i);}
        }
        string ans="";
        while (!st.empty()){
            ans=st.top()+ ans;
            st.pop();
        }return ans;
    }
};