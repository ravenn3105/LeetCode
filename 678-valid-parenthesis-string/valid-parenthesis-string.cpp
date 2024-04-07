class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st, star;

        for(int i=0; i<size(s); i++) {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == '*')
                star.push(i);
            else{
                if(!st.empty())
                    st.pop();

                else if(!star.empty())
                    star.pop();
            
                else
                    return false;
            }
        }
        while(!st.empty() && !star.empty() && star.top() > st.top())
        {
            st.pop();
            star.pop();
        }return st.empty();
    }
};